import { h, get, post, toast } from './api.js';

const GLITCH_PARAMS = ['glitch.width', 'glitch.offset', 'glitch.ext_offset', 'glitch.repeat', 'glitch.width_fine', 'glitch.offset_fine'];
const RESULT_COLORS = { normal: '#4ea1ff', success: '#4fd18b', reset: '#ff5d5d' };

export function initGlitch(ctx, el) {
  const rows = h('div');
  const cmdIn = h('input', { class: 'mono', value: 'g', style: 'width:40px', maxlength: 1 });
  const dataIn = h('input', { class: 'flex mono', placeholder: 'hex payload (optional)' });
  const expIn = h('input', { class: 'flex mono', value: 'c4090000', placeholder: 'expected response hex (blank = any valid)' });
  const lenIn = h('input', { type: 'number', value: 4, style: 'width:60px' });
  const repIn = h('input', { type: 'number', value: 1, min: 1, style: 'width:60px' });
  const orderSel = h('select', {}, h('option', { value: 'nested' }, 'nested'), h('option', { value: 'random' }, 'random'));
  const resetSel = h('select', {}, h('option', { value: 'nrst' }, 'nRST pin'), h('option', { value: 'pdic' }, 'PDIC pin'), h('option', { value: 'none' }, 'no reset'));
  const resetOn = h('select', {}, h('option', { value: 'reset' }, 'after reset outcome'), h('option', { value: 'always' }, 'before every attempt'), h('option', { value: 'never' }, 'never'));
  const timeoutIn = h('input', { type: 'number', value: 1000, style: 'width:70px', title: 'ms to wait for a response' });
  const status = h('div', { class: 'help mono' }, 'idle');
  const counts = h('div', { class: 'legend' });
  const canvas = h('canvas', { class: 'scatter' });
  const xSel = h('select', {}), ySel = h('select', {});
  const table = h('table', { class: 'tbl' });
  let results = [], paramNames = [];

  function addRow(path = 'glitch.width', start = 0, stop = 40, step = 5) {
    const sel = h('select', {}, ...GLITCH_PARAMS.map((p) => h('option', { value: p, selected: p === path }, p.replace('glitch.', ''))));
    const r = h('div', { class: 'param-row' }, sel,
      h('input', { type: 'number', value: start, placeholder: 'start', step: 'any' }), h('input', { type: 'number', value: stop, placeholder: 'stop', step: 'any' }), h('input', { type: 'number', value: step, placeholder: 'step', step: 'any' }),
      h('button', { class: 'btn sm', onclick: () => r.remove() }, '✕'));
    rows.append(r);
  }
  addRow('glitch.width', 5, 45, 5); addRow('glitch.ext_offset', 0, 100, 10);

  function params() {
    const ps = [...rows.querySelectorAll('.param-row')].map((r) => {
      const [sel, s, e, st] = r.querySelectorAll('select,input');
      const isInt = ['glitch.ext_offset', 'glitch.repeat', 'glitch.width_fine', 'glitch.offset_fine'].includes(sel.value);
      return { path: sel.value, start: +s.value, stop: +e.value, step: +st.value, int: isInt };
    });
    return { parameters: ps, repeats: +repIn.value, order: orderSel.value, command: cmdIn.value || 'g', data: dataIn.value, expected: expIn.value || null, output_len: +lenIn.value, reset: resetSel.value, reset_on: resetOn.value, glitch_timeout: +timeoutIn.value };
  }
  async function start() {
    results = [];
    try { await post('/api/glitch/start', params()); } catch (e) { toast(e.message, 'err', 6000); }
  }
  async function exportCsv() { try { const r = await post('/api/glitch/export', { path: 'glitch_results.csv' }); toast('Saved ' + r.path, 'ok', 6000); } catch (e) { toast(e.message, 'err'); } }

  function updateAxes(names) {
    if (names.join() === paramNames.join()) return;
    paramNames = names;
    [xSel, ySel].forEach((s) => { s.innerHTML = ''; names.forEach((n, i) => s.append(h('option', { value: i }, n.replace('glitch.', '')))); });
    xSel.value = 0; ySel.value = names.length > 1 ? 1 : 0;
  }
  function draw() {
    const ctx2 = canvas.getContext('2d');
    const W = canvas.width = canvas.clientWidth * devicePixelRatio, H = canvas.height = canvas.clientHeight * devicePixelRatio;
    ctx2.clearRect(0, 0, W, H);
    if (!results.length) return;
    const xi = +xSel.value, yi = +ySel.value;
    const xs = results.map((r) => r.values[xi]), ys = results.map((r) => r.values[yi]);
    const pad = 36 * devicePixelRatio;
    let xmin = Math.min(...xs), xmax = Math.max(...xs), ymin = Math.min(...ys), ymax = Math.max(...ys);
    if (xmin === xmax) { xmin -= 1; xmax += 1; } if (ymin === ymax) { ymin -= 1; ymax += 1; }
    const sx = (v) => pad + (v - xmin) / (xmax - xmin) * (W - 2 * pad), sy = (v) => H - pad - (v - ymin) / (ymax - ymin) * (H - 2 * pad);
    ctx2.strokeStyle = '#2a3441'; ctx2.lineWidth = devicePixelRatio;
    ctx2.strokeRect(pad, pad, W - 2 * pad, H - 2 * pad);
    ctx2.fillStyle = '#8a96a5'; ctx2.font = `${11 * devicePixelRatio}px sans-serif`;
    ctx2.fillText(`${(paramNames[xi] || '').replace('glitch.', '')}  ${xmin} … ${xmax}`, pad, H - 8 * devicePixelRatio);
    ctx2.save(); ctx2.translate(10 * devicePixelRatio, H - pad); ctx2.rotate(-Math.PI / 2); ctx2.fillText(`${(paramNames[yi] || '').replace('glitch.', '')}  ${ymin} … ${ymax}`, 0, 0); ctx2.restore();
    const order = { normal: 0, reset: 1, success: 2 };
    [...results].sort((a, b) => order[a.result] - order[b.result]).forEach((r) => {
      ctx2.fillStyle = RESULT_COLORS[r.result] || '#fff';
      ctx2.globalAlpha = r.result === 'normal' ? 0.5 : 0.9;
      const rad = (r.result === 'success' ? 4 : 2.5) * devicePixelRatio;
      ctx2.beginPath(); ctx2.arc(sx(r.values[xi]), sy(r.values[yi]), rad, 0, Math.PI * 2); ctx2.fill();
    });
    ctx2.globalAlpha = 1;
  }
  function renderCounts(c) {
    counts.innerHTML = '';
    ['normal', 'success', 'reset'].forEach((k) => counts.append(h('span', {}, h('i', { style: `background:${RESULT_COLORS[k]}` }), `${k}: ${c[k] || 0}`)));
  }
  function renderTable() {
    table.innerHTML = '';
    table.append(h('tr', {}, h('th', {}, '#'), ...paramNames.map((n) => h('th', {}, n.replace('glitch.', ''))), h('th', {}, 'result'), h('th', {}, 'response')));
    results.slice(-60).reverse().forEach((r) => table.append(h('tr', {}, h('td', {}, r.i), ...r.values.map((v) => h('td', {}, v)), h('td', {}, h('span', { class: 'badge ' + r.result }, r.result)), h('td', { class: 'mono' }, r.response || '-'))));
  }
  let drawScheduled = false;
  function scheduleDraw() { if (drawScheduled) return; drawScheduled = true; requestAnimationFrame(() => { drawScheduled = false; draw(); renderTable(); }); }

  el.append(
    h('h2', {}, 'Sweep parameters'),
    h('div', { class: 'card' },
      h('div', { class: 'help' }, 'Configure glitch.trigger_src, glitch.output, glitch.clk_src, io.hs2 / io.glitch_hp etc. in the Scope tab first. The sweep sets these parameters for every point:'),
      h('div', { class: 'param-row', style: 'color:var(--muted);font-size:11px' }, h('span', {}, 'parameter'), h('span', {}, 'start'), h('span', {}, 'stop'), h('span', {}, 'step'), h('span')),
      rows,
      h('div', { class: 'row' }, h('button', { class: 'btn sm', onclick: () => addRow() }, '+ parameter'), h('label', {}, 'repeats'), repIn, h('label', {}, 'order'), orderSel)),
    h('h2', {}, 'Target interaction'),
    h('div', { class: 'card' },
      h('div', { class: 'row' }, h('label', {}, 'Command'), cmdIn, dataIn),
      h('div', { class: 'row' }, h('label', {}, 'Expected'), expIn, lenIn),
      h('div', { class: 'row' }, h('label', {}, 'Reset via'), resetSel, resetOn),
      h('div', { class: 'row' }, h('label', {}, 'Timeout ms'), timeoutIn),
      h('div', { class: 'help' }, 'normal = valid response equal to expected · success = valid response but different · reset = no/invalid response'),
      h('div', { class: 'row' }, h('button', { class: 'btn primary', onclick: start }, 'Start sweep'), h('button', { class: 'btn danger', onclick: () => post('/api/capture/stop') }, 'Stop'), h('button', { class: 'btn', onclick: exportCsv }, 'Export CSV')),
      status),
    h('h2', {}, 'Results'),
    h('div', { class: 'card' }, counts,
      h('div', { class: 'row', style: 'margin-top:6px' }, h('label', {}, 'X'), xSel, h('label', {}, 'Y'), ySel),
      canvas,
      h('details', {}, h('summary', {}, 'Recent attempts'), table)),
  );
  xSel.addEventListener('change', draw); ySel.addEventListener('change', draw);
  new ResizeObserver(draw).observe(canvas);

  ctx.on('glitch', (ev) => { status.textContent = `${ev.state}: point ${ev.point}/${ev.points}` + (ev.error ? ' · ' + ev.error : ''); status.className = 'help mono' + (ev.error ? ' err' : ''); updateAxes(ev.parameters || []); renderCounts(ev.counts || {}); if (ev.state !== 'running') get('/api/glitch/results').then(load).catch(() => {}); });
  ctx.on('glitch_result', (r) => { results.push(r); scheduleDraw(); });
  function load(res) { results = res.results || []; updateAxes(res.parameters || []); renderCounts(res.counts || {}); draw(); renderTable(); }
  get('/api/glitch/results').then(load).catch(() => {});
}
