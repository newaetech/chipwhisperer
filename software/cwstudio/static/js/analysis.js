import { h, get, post, getBinary, toast } from './api.js';

export function initAnalysis(ctx, el) {
  const models = ctx.meta.cpa_models;
  const modelSel = h('select', { class: 'flex' }, ...Object.entries(models).map(([k, v]) => h('option', { value: k }, v.label)));
  const tStart = h('input', { type: 'number', value: 0, min: 0, style: 'width:80px' });
  const tEnd = h('input', { type: 'number', placeholder: 'all', style: 'width:80px' });
  const pStart = h('input', { type: 'number', value: 0, min: 0, style: 'width:80px' });
  const pEnd = h('input', { type: 'number', placeholder: 'all', style: 'width:80px' });
  const knownKey = h('input', { class: 'flex mono', placeholder: 'auto (from stored traces) or hex' });
  const reportIn = h('input', { type: 'number', value: 50, min: 1, style: 'width:80px' });
  const status = h('div', { class: 'help mono' }, 'no attack yet');
  const keyEl = h('div', { class: 'keybytes' });
  const recovered = h('div', { class: 'code', style: 'margin:6px 0' });
  const table = h('table', { class: 'tbl' });
  const conv = h('div', { class: 'miniplot' });
  const corrPlotEl = h('div', { class: 'miniplot', style: 'height:140px' });
  const overlayChk = h('input', { type: 'checkbox', title: 'overlay correlation on the main waveform' });
  let convPlot = null, corrPlot = null, selByte = 0, last = null;
  const btnRun = h('button', { class: 'btn primary', onclick: run }, 'Run CPA');
  const btnStop = h('button', { class: 'btn danger', onclick: () => post('/api/analysis/cpa/stop') }, 'Stop');

  async function run() {
    const pr = pEnd.value ? [+pStart.value, +pEnd.value] : (+pStart.value ? [+pStart.value, 0] : null);
    try {
      const r = await post('/api/analysis/cpa/start', { model: modelSel.value, trace_start: +tStart.value, trace_end: tEnd.value ? +tEnd.value : null, point_range: pr, known_key: knownKey.value || null, report_every: +reportIn.value });
      status.textContent = `running on ${r.traces} traces × ${r.samples} samples`;
    } catch (e) { toast(e.message, 'err', 6000); }
  }
  function useZoom() {
    const z = ctx.wave.zoomRange();
    if (z) { pStart.value = z[0]; pEnd.value = z[1]; }
  }

  function render(res) {
    last = res;
    status.textContent = `${res.done ? (res.error ? 'error: ' + res.error : 'done') : 'running'} · ${res.traces_used}/${res.total} traces · ${res.elapsed}s`;
    status.className = 'help mono' + (res.error ? ' err' : '');
    keyEl.innerHTML = '';
    res.bytes.forEach((b) => {
      const cls = b.known != null ? (b.best === b.known ? 'right' : 'wrong') : '';
      const kb = h('div', { class: `keybyte ${cls}${b.byte === selByte ? ' sel' : ''}`, onclick: () => { selByte = b.byte; render(last); loadCorr(); } },
        b.best.toString(16).padStart(2, '0').toUpperCase(), h('small', {}, b.pge != null ? `pge ${b.pge}` : `${b.top[0].corr.toFixed(2)}`));
      keyEl.append(kb);
    });
    recovered.innerHTML = `best guess: <b>${res.best_key}</b>` + (res.recovered_master_key ? `<br>master key: <b>${res.recovered_master_key}</b>` : '') + (res.known_key ? `<br>known: ${res.known_key}` : '');
    table.innerHTML = '';
    table.append(h('tr', {}, h('th', {}, 'byte'), h('th', {}, 'top guesses (corr)'), h('th', {}, 'sample')));
    res.bytes.forEach((b) => table.append(h('tr', {}, h('td', {}, b.byte), h('td', { class: 'mono' }, b.top.slice(0, 3).map((t) => `${t.guess.toString(16).padStart(2, '0')} (${t.corr.toFixed(3)})`).join('  ')), h('td', {}, b.top[0].sample))));
    renderConv(res);
  }
  function renderConv(res) {
    const hist = res.history || [];
    const x = hist.map((e) => e.traces);
    const hasPge = hist.length && hist[0].pge;
    const series = [{}];
    const data = [x];
    if (hasPge) {
      for (let b = 0; b < 16; b++) { series.push({ stroke: `hsl(${b * 22},70%,60%)`, width: 1, points: { show: false } }); data.push(hist.map((e) => e.pge[b])); }
    } else {
      for (let b = 0; b < 16; b++) { series.push({ stroke: `hsl(${b * 22},70%,60%)`, width: 1, points: { show: false } }); data.push(hist.map((e) => e.max_corr[b])); }
    }
    if (convPlot) convPlot.destroy();
    convPlot = new uPlot({ width: conv.clientWidth || 360, height: conv.clientHeight || 160, legend: { show: false }, cursor: { show: false },
      scales: { x: { time: false } }, axes: [{ stroke: '#8a96a5', grid: { stroke: '#1f2731' }, label: 'traces', labelSize: 14 }, { stroke: '#8a96a5', grid: { stroke: '#1f2731' }, label: hasPge ? 'PGE' : 'max |corr|', labelSize: 14, size: 45 }], series }, data, conv);
  }
  async function loadCorr() {
    if (!last) return;
    try {
      const { header, samples } = await getBinary(`/api/analysis/cpa/corr/${selByte}`);
      const x = Float64Array.from({ length: samples.length }, (_, i) => i + header.offset);
      if (corrPlot) corrPlot.destroy();
      corrPlot = new uPlot({ width: corrPlotEl.clientWidth || 360, height: corrPlotEl.clientHeight || 140, legend: { show: false }, cursor: { show: false }, scales: { x: { time: false }, y: { range: [-1, 1] } },
        axes: [{ stroke: '#8a96a5', grid: { stroke: '#1f2731' } }, { stroke: '#8a96a5', grid: { stroke: '#1f2731' }, size: 45 }],
        series: [{}, { stroke: '#ff9f43', width: 1, points: { show: false } }] }, [x, samples], corrPlotEl);
      if (overlayChk.checked) ctx.wave.setCorr(samples, header.offset);
    } catch (e) { /* ignore */ }
  }
  overlayChk.addEventListener('change', () => { if (!overlayChk.checked) ctx.wave.setCorr(null); else loadCorr(); });

  el.append(
    h('h2', {}, 'CPA attack'),
    h('div', { class: 'card' },
      h('div', { class: 'row' }, h('label', {}, 'Leakage model'), modelSel),
      h('div', { class: 'row' }, h('label', {}, 'Traces'), tStart, '–', tEnd),
      h('div', { class: 'row' }, h('label', {}, 'Samples'), pStart, '–', pEnd, h('button', { class: 'btn sm', onclick: useZoom }, 'use zoom')),
      h('div', { class: 'row' }, h('label', {}, 'Known key'), knownKey),
      h('div', { class: 'row' }, h('label', {}, 'Report every'), reportIn, h('span', { class: 'muted' }, 'traces')),
      h('div', { class: 'row' }, btnRun, btnStop, h('label', {}, overlayChk, ' overlay corr')),
      status),
    h('h2', {}, 'Result'),
    h('div', { class: 'card' }, keyEl, recovered,
      h('div', { class: 'help' }, 'Convergence (PGE per byte if the key is known, else max correlation):'), conv,
      h('div', { class: 'help' }, 'Correlation vs sample for the selected byte (click a byte above):'), corrPlotEl,
      h('details', {}, h('summary', {}, 'Top guesses table'), table)),
  );
  ctx.on('cpa', (ev) => { render(ev); if (ev.done) loadCorr(); });
  ctx.on('status', (st) => { if (st.cpa && !last) get('/api/analysis/cpa').then((r) => { if (r && r.bytes) { render(r); loadCorr(); } }).catch(() => {}); });
}
