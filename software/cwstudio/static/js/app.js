import { get, put, post, getBinary, Socket, Emitter, toast, h } from './api.js';
import { Waveform } from './waveform.js';
import { SettingsTree } from './settings.js';
import { initConnect } from './connect.js';
import { initTarget } from './target.js';
import { initCapture } from './capture.js';
import { initAnalysis } from './analysis.js';
import { initGlitch } from './glitch.js';
import { initHelp } from './help.js';

const ctx = new Emitter();
ctx.status = null;
ctx.meta = null;

// ---------- tabs ----------
ctx.showTab = (name) => {
  document.querySelectorAll('#tabs .tab').forEach((b) => b.classList.toggle('active', b.dataset.tab === name));
  document.querySelectorAll('#sidebar .panel').forEach((p) => p.classList.toggle('active', p.id === 'panel-' + name));
  try { localStorage.setItem('cw.tab', name); } catch (e) { /* ignore */ }
  ctx.emit('tab', name);
};
document.querySelectorAll('#tabs .tab').forEach((b) => b.addEventListener('click', () => ctx.showTab(b.dataset.tab)));

// ---------- log drawer ----------
const logBody = document.getElementById('log-body');
const logFilter = document.getElementById('log-filter');
const logLines = [];
let logCount = 0;
function addLog(ev, replay = false) {
  const t = new Date((ev.ts || Date.now() / 1000) * 1000).toLocaleTimeString();
  const line = h('div', { class: 'log-line ' + (ev.level || 'INFO') }, h('span', { class: 't' }, t), h('span', { class: 'lv' }, ev.level || ''), h('span', { class: 'muted' }, (ev.logger || '').replace('ChipWhisperer ', 'cw.') + ' '), ev.msg || '');
  logLines.push({ el: line, text: (ev.msg || '') + (ev.logger || '') });
  if (logLines.length > 1500) logLines.shift().el.remove();
  if (logFilter.value && !line.textContent.toLowerCase().includes(logFilter.value.toLowerCase())) line.style.display = 'none';
  const atBottom = logBody.scrollHeight - logBody.scrollTop - logBody.clientHeight < 30;
  logBody.append(line);
  if (atBottom) logBody.scrollTop = logBody.scrollHeight;
  logCount++;
  document.getElementById('log-count').textContent = `${logCount}`;
  if (!replay && (ev.level === 'ERROR' || ev.level === 'CRITICAL') && !document.hidden) toast(ev.msg, 'err', 6000);
}
logFilter.addEventListener('input', () => { const f = logFilter.value.toLowerCase(); logLines.forEach((l) => { l.el.style.display = !f || l.text.toLowerCase().includes(f) ? '' : 'none'; }); });
document.getElementById('log-clear').addEventListener('click', () => { logBody.innerHTML = ''; logLines.length = 0; });
document.getElementById('log-toggle').addEventListener('click', () => { document.getElementById('app').classList.toggle('bottom-collapsed'); setTimeout(() => ctx.wave.resize(), 50); });

// ---------- waveform ----------
ctx.wave = new Waveform(document.getElementById('wave-plot'), document.getElementById('wave-toolbar'), document.getElementById('wave-footer'));
ctx.wave.onBrowse = async (i) => {
  try { const { header, samples } = await getBinary(`/api/traces/${i}`); ctx.wave.setBrowse(samples, header); } catch (e) { /* no such trace */ }
};
ctx.wave.onNeedStats = async () => {
  try {
    const { header, samples } = await getBinary('/api/traces/stats');
    if (!header.samples) return;
    const n = header.samples, st = {};
    header.fields.forEach((f, i) => { st[f] = samples.subarray(i * n, (i + 1) * n); });
    ctx.wave.setStats(st);
  } catch (e) { /* ignore */ }
};

// ---------- settings helpers ----------
ctx.saveSetting = async (which, path, value) => {
  const r = await put(`/api/${which}/settings`, { path, value });
  if (which === 'scope' && (path.includes('freq') || path.includes('adc_src') || path.includes('clk'))) setTimeout(updateSampleRate, 300);
  return r.value;
};
async function updateSampleRate() {
  try {
    const nodes = await get('/api/scope/settings');
    const find = (ns, p) => { for (const n of ns) { if (n.path === p) return n; if (n.children) { const r = find(n.children, p); if (r) return r; } } return null; };
    const n = find(nodes, 'clock.adc_freq') || find(nodes, 'adc.clk_freq') || find(nodes, 'clock.adc_rate');
    ctx.wave.sampleRate = n && typeof n.value === 'number' && n.value > 0 ? n.value : null;
    ctx.scopeSettings = nodes;
    ctx.wave.updateFooter();
  } catch (e) { ctx.wave.sampleRate = null; }
}

// ---------- scope panel ----------
function initScope(el) {
  const filter = h('input', { class: 'flex', placeholder: 'filter settings…' });
  const treeEl = h('div');
  const tree = new SettingsTree(treeEl, { load: () => get('/api/scope/settings'), save: (p, v) => ctx.saveSetting('scope', p, v) });
  tree.onError = (p, m) => toast(`${p}: ${m}`, 'err', 6000);
  filter.addEventListener('input', () => tree.setFilter(filter.value));
  const action = async (a, label) => { try { const r = await post(`/api/scope/action/${a}`); toast(label + (r.timeout ? ' (timeout)' : ' done'), r.timeout ? 'warn' : 'ok'); tree.refreshValues(); } catch (e) { toast(e.message, 'err', 6000); } };
  el.append(
    h('div', { class: 'row' }, filter, h('button', { class: 'btn sm', onclick: () => tree.refresh() }, '↻')),
    h('div', { class: 'row' },
      h('button', { class: 'btn sm', onclick: () => action('default_setup', 'default_setup()') }, 'default_setup()'),
      h('button', { class: 'btn sm', onclick: () => action('arm_capture', 'arm+capture') , title: 'arm the scope and wait for a trigger without talking to the target' }, 'test trigger'),
      h('button', { class: 'btn sm', onclick: () => action('reset_fpga', 'reset FPGA') }, 'reset FPGA')),
    h('div', { class: 'help' }, 'Hover a name for its documentation. Enter or Tab applies a value; Esc reverts. Values are read back from the hardware after every change.'),
    treeEl,
  );
  ctx.on('scope-connected', () => { tree.refresh(); updateSampleRate(); });
  ctx.on('scope-disconnected', () => tree.refresh());
  ctx.on('setting', (ev) => { if (ev.target === 'scope') tree.refreshValues(); });
  ctx.on('tab', (t) => { if (t === 'scope' && ctx.status && ctx.status.scope.connected) tree.refreshValues(); });
  return tree;
}

// ---------- header / status ----------
function setChip(id, cls, text) { const c = document.getElementById(id); c.className = 'chip ' + cls; c.querySelector('.txt').textContent = text; }
let prevScope = false, prevTarget = false;
function applyStatus(st) {
  ctx.status = st;
  const sc = st.scope, tg = st.target;
  setChip('chip-scope', sc.connected ? 'on' : '', sc.connected ? `${sc.name || sc.type}${sc.sn ? ' · ' + sc.sn : ''}` : 'No scope');
  setChip('chip-target', tg.connected ? 'on' : '', tg.connected ? tg.type : 'No target');
  const job = st.job;
  if (job && job.running) setChip('chip-job', 'busy', `${job.name}: ${job.done != null ? job.done + (job.target ? '/' + job.target : '') : (job.point != null ? job.point + '/' + job.points : '')}${job.rate ? ' · ' + job.rate + '/s' : ''}`);
  else if (job && job.error) setChip('chip-job', 'err', `${job.name} error`);
  else setChip('chip-job', '', 'Idle');
  document.getElementById('btn-stop').disabled = !(job && job.running);
  document.getElementById('btn-run').disabled = !sc.connected || (job && job.running);
  document.getElementById('btn-single').disabled = !sc.connected || (job && job.running);
  document.getElementById('trace-count').textContent = `${st.traces.count} traces`;
  ctx.wave.setTraceCount(st.traces.count);
  if (sc.connected !== prevScope) { prevScope = sc.connected; ctx.emit(sc.connected ? 'scope-connected' : 'scope-disconnected'); }
  if (tg.connected !== prevTarget) { prevTarget = tg.connected; ctx.emit(tg.connected ? 'target-connected' : 'target-disconnected'); }
  ctx.emit('status', st);
}
ctx.refreshStatus = async () => { try { applyStatus(await get('/api/status')); } catch (e) { /* server down */ } };

// ---------- boot ----------
async function boot() {
  ctx.meta = await get('/api/meta');
  document.title = `ChipWhisperer Studio ${ctx.meta.version}`;
  initConnect(ctx, document.getElementById('panel-connect'));
  ctx.scopeTree = initScope(document.getElementById('panel-scope'));
  ctx.target = initTarget(ctx, document.getElementById('panel-target'));
  ctx.capture = initCapture(ctx, document.getElementById('panel-capture'));
  initAnalysis(ctx, document.getElementById('panel-analysis'));
  initGlitch(ctx, document.getElementById('panel-glitch'));
  initHelp(ctx, document.getElementById('panel-help'));

  document.getElementById('btn-single').addEventListener('click', () => ctx.capture.single());
  document.getElementById('btn-run').addEventListener('click', () => ctx.capture.start());
  document.getElementById('btn-stop').addEventListener('click', () => ctx.capture.stop());
  document.addEventListener('keydown', (e) => {
    if (['INPUT', 'SELECT', 'TEXTAREA'].includes(document.activeElement.tagName)) return;
    if (e.key === 's' || e.key === 'S') ctx.capture.single();
    else if (e.key === 'r' || e.key === 'R') ctx.capture.start();
    else if (e.key === 'Escape') ctx.capture.stop();
    else if (e.key === ' ') { e.preventDefault(); ctx.wave.pauseBtn.click(); }
    else if (e.key === 'ArrowLeft' && ctx.wave.mode === 'browse') ctx.wave.gotoIndex(+ctx.wave.idxInput.value - 1);
    else if (e.key === 'ArrowRight' && ctx.wave.mode === 'browse') ctx.wave.gotoIndex(+ctx.wave.idxInput.value + 1);
  });

  const sock = new Socket();
  ctx.sock = sock;
  const wsEl = document.getElementById('ws-state');
  sock.on('open', () => { wsEl.className = 'ws on'; ctx.refreshStatus(); });
  sock.on('close', () => { wsEl.className = 'ws off'; });
  sock.on('hello', (ev) => applyStatus(ev.status));
  sock.on('status', applyStatus);
  sock.on('log', addLog);
  sock.on('capture', (ev) => { ctx.emit('capture', ev); if (ev.state !== 'running') { ctx.refreshStatus(); if (ctx.wave.showMean || ctx.wave.showEnv) ctx.wave.onNeedStats(); } });
  sock.on('trace', (header, samples) => { ctx.wave.pushLive(samples, header); if (header.stored !== false && header.index >= 0) { document.getElementById('trace-count').textContent = `${header.index + 1} traces`; ctx.wave.setTraceCount(header.index + 1); } });
  sock.on('traces', (ev) => { ctx.emit('traces', ev); ctx.wave.setTraceCount(ev.count); });
  sock.on('serial', (ev) => ctx.emit('serial', ev));
  sock.on('setting', (ev) => ctx.emit('setting', ev));
  sock.on('cpa', (ev) => ctx.emit('cpa', ev));
  sock.on('glitch', (ev) => { ctx.emit('glitch', ev); if (ev.state !== 'running') ctx.refreshStatus(); });
  sock.on('glitch_result', (ev) => ctx.emit('glitch_result', ev));

  // Restore last tab; fall back to Connect.
  let tab = 'connect';
  try { tab = localStorage.getItem('cw.tab') || 'connect'; } catch (e) { /* ignore */ }
  ctx.showTab(tab);
  await ctx.refreshStatus();
  // Recent log history for late joiners
  try { (await get('/api/logs')).slice(-200).forEach((ev) => { if (ev.type === 'log') addLog(ev, true); }); } catch (e) { /* ignore */ }
}
boot().catch((e) => { console.error(e); toast('Failed to start UI: ' + e.message, 'err', 10000); });
