// Generic settings tree editor (scope / target).
import { h } from './api.js';

export class SettingsTree {
  constructor(container, { load, save, onChanged }) {
    this.el = container;
    this.load = load; this.save = save; this.onChanged = onChanged;
    this.nodes = [];
    this.open = new Set(['adc', 'gain', 'clock', 'trigger', 'io']);
    this.filter = '';
    this.leafEls = new Map();
    this.busy = false;
  }

  async refresh() {
    if (this.busy) return;
    this.busy = true;
    try {
      const nodes = await this.load();
      this.nodes = nodes || [];
      this.render();
    } catch (e) {
      this.el.innerHTML = '';
      this.el.append(h('div', { class: 'help err' }, 'Could not load settings: ' + e.message));
    } finally { this.busy = false; }
  }

  async refreshValues() {
    // Update values in place without rebuilding inputs (keeps focus).
    try {
      const nodes = await this.load();
      this.nodes = nodes || [];
      const walk = (ns) => ns.forEach((n) => {
        if (n.kind === 'group') return walk(n.children || []);
        const rec = this.leafEls.get(n.path);
        if (!rec) return;
        rec.node = n;
        if (rec.input && document.activeElement !== rec.input && !rec.row.classList.contains('pending')) this.setInputValue(rec.input, n);
        if (rec.ro) rec.ro.textContent = fmtValue(n.value);
      });
      walk(this.nodes);
    } catch (e) { /* ignore */ }
  }

  setFilter(f) { this.filter = f.toLowerCase(); this.render(); }

  render() {
    this.el.innerHTML = '';
    this.leafEls.clear();
    const tree = h('div', { class: 'tree' });
    if (!this.nodes.length) { tree.append(h('div', { class: 'help' }, 'Nothing connected.')); }
    this.nodes.forEach((n) => { const el = this.renderNode(n, 0); if (el) tree.append(el); });
    this.el.append(tree);
  }

  matches(n) {
    if (!this.filter) return true;
    if (n.kind === 'group') return (n.children || []).some((c) => this.matches(c));
    return n.path.toLowerCase().includes(this.filter) || String(n.value).toLowerCase().includes(this.filter);
  }

  renderNode(n, depth) {
    if (!this.matches(n)) return null;
    if (n.kind === 'group') {
      const g = h('div', { class: 'group' + (this.open.has(n.path) || this.filter ? ' open' : '') });
      const head = h('div', { class: 'ghead', onclick: () => { g.classList.toggle('open'); if (g.classList.contains('open')) this.open.add(n.path); else this.open.delete(n.path); } },
        h('span', { class: 'caret' }, '▸'), n.name, h('span', { class: 'muted', style: 'font-weight:400;margin-left:auto;font-size:11px' }, `${countLeaves(n)}`));
      const body = h('div', { class: 'gbody' });
      (n.children || []).forEach((c) => { const el = this.renderNode(c, depth + 1); if (el) body.append(el); });
      g.append(head, body);
      return g;
    }
    return this.renderLeaf(n);
  }

  setInputValue(input, n) {
    if (input.tagName === 'SELECT') {
      const want = valueKey(n.value);
      let found = false;
      for (const o of input.options) if (o.value === want) { input.value = want; found = true; break; }
      if (!found) { input.append(h('option', { value: want }, fmtValue(n.value))); input.value = want; }
    } else input.value = fmtValue(n.value);
  }

  renderLeaf(n) {
    const row = h('div', { class: 'leaf' });
    const name = h('span', { class: 'name', title: `${n.path}\n\n${n.doc || ''}` }, n.name);
    row.append(name);
    if (!n.writable) {
      const ro = h('span', { class: 'ro', title: n.doc || '' }, fmtValue(n.value));
      row.append(ro);
      this.leafEls.set(n.path, { row, ro, node: n });
      return row;
    }
    let input;
    const choices = n.choices && n.choices.length ? n.choices : (n.type === 'bool' ? [true, false] : null);
    if (choices) {
      input = h('select', {}, ...choices.map((c) => h('option', { value: valueKey(c) }, fmtValue(c))));
      this.setInputValue(input, n);
      input.addEventListener('change', () => this.commit(row, input, n, parseChoice(input.value, choices)));
    } else {
      input = h('input', { type: 'text', value: fmtValue(n.value), spellcheck: 'false' });
      input.addEventListener('input', () => row.classList.add('pending'));
      input.addEventListener('keydown', (e) => { if (e.key === 'Enter') input.blur(); if (e.key === 'Escape') { this.setInputValue(input, n); row.classList.remove('pending'); input.blur(); } });
      input.addEventListener('blur', () => { if (row.classList.contains('pending')) this.commit(row, input, n, input.value); });
    }
    row.append(input);
    this.leafEls.set(n.path, { row, input, node: n });
    return row;
  }

  async commit(row, input, n, value) {
    row.classList.remove('errored', 'saved');
    row.classList.add('pending');
    try {
      const v = await this.save(n.path, value);
      n.value = v;
      this.setInputValue(input, n);
      row.classList.remove('pending'); row.classList.add('saved');
      setTimeout(() => row.classList.remove('saved'), 1200);
      if (this.onChanged) this.onChanged(n.path, v);
      this.refreshValues();
    } catch (e) {
      row.classList.remove('pending'); row.classList.add('errored');
      input.title = e.message;
      if (this.onError) this.onError(n.path, e.message);
    }
  }
}

function countLeaves(n) { return (n.children || []).reduce((a, c) => a + (c.kind === 'group' ? countLeaves(c) : 1), 0); }
export function fmtValue(v) {
  if (v === null || v === undefined) return 'None';
  if (typeof v === 'boolean') return v ? 'True' : 'False';
  if (typeof v === 'number') return Number.isInteger(v) ? String(v) : String(+v.toPrecision(10));
  if (typeof v === 'object') return JSON.stringify(v);
  return String(v);
}
function valueKey(v) { return v === null || v === undefined ? '__none__' : (typeof v === 'boolean' ? (v ? '__true__' : '__false__') : String(v)); }
function parseChoice(key, choices) {
  if (key === '__none__') return null;
  if (key === '__true__') return true;
  if (key === '__false__') return false;
  for (const c of choices) if (String(c) === key && typeof c === 'number') return c;
  return key;
}
