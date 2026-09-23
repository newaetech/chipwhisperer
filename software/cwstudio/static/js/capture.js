import { h, get, post, del, upload, toast, fmtBytes } from './api.js';

export function initCapture(ctx, el) {
  const countIn = h('input', { type: 'number', value: 1000, min: 0, class: 'flex', title: '0 = continuous' });
  const modeSel = h('select', { class: 'flex' }, h('option', { value: 'simpleserial' }, 'SimpleSerial (send key/text, read response)'), h('option', { value: 'trigger_only' }, 'Trigger only (arm + wait for trigger)'));
  const keyMode = h('select', { class: 'flex' }, h('option', { value: 'fixed' }, 'fixed'), h('option', { value: 'random' }, 'random'));
  const textMode = h('select', { class: 'flex' }, h('option', { value: 'random' }, 'random'), h('option', { value: 'fixed' }, 'fixed'), h('option', { value: 'counter' }, 'counter'));
  const keyIn = h('input', { class: 'flex mono', value: '2b7e151628aed2a6abf7158809cf4f3c' });
  const textIn = h('input', { class: 'flex mono', value: '00112233445566778899aabbccddeeff' });
  const storeChk = h('input', { type: 'checkbox', checked: true });
  const clearChk = h('input', { type: 'checkbox' });
  const ackChk = h('input', { type: 'checkbox', checked: true });
  const rateIn = h('input', { type: 'number', value: 25, min: 1, max: 60, style: 'width:70px', title: 'max displayed traces per second' });
  const throttleIn = h('input', { type: 'number', value: 0, min: 0, style: 'width:70px', title: 'max captures per second (0 = unlimited)' });
  const prog = h('progress', { value: 0, max: 1 });
  const progTxt = h('div', { class: 'help mono' }, 'idle');
  const summary = h('div', { class: 'kv' });
  const fmtSel = h('select', {}, h('option', { value: 'npz' }, 'NumPy .npz'), h('option', { value: 'cwp' }, 'ChipWhisperer project .cwp'), h('option', { value: 'csv' }, 'CSV'), h('option', { value: 'npy' }, 'NumPy .npy set'));
  const pathIn = h('input', { class: 'flex mono', value: 'traces', placeholder: 'file name or absolute path' });
  const importPath = h('input', { class: 'flex mono', placeholder: 'path to .npz / .cwp on the Studio machine' });
  const importFile = h('input', { type: 'file', accept: '.npz,.npy,.cwp', class: 'flex' });

  function params(extra) {
    return Object.assign({
      count: +countIn.value, mode: modeSel.value, key_mode: keyMode.value, text_mode: textMode.value,
      key: keyIn.value, text: textIn.value, store: storeChk.checked, clear: clearChk.checked, ack: ackChk.checked,
      display_rate: +rateIn.value, max_rate: +throttleIn.value,
    }, extra || {});
  }
  async function start(extra) {
    try { await post('/api/capture/start', params(extra)); } catch (e) { toast(e.message, 'err', 6000); }
  }
  async function single() {
    try { await post('/api/capture/single', params({ clear: false })); } catch (e) { toast(e.message, 'err', 6000); }
  }
  async function stop() { try { await post('/api/capture/stop'); } catch (e) { toast(e.message, 'err'); } }

  async function exportTraces() {
    try { const r = await post('/api/traces/export', { path: pathIn.value, format: fmtSel.value }); toast(`Exported ${r.count} traces to ${r.path}`, 'ok', 7000); } catch (e) { toast(e.message, 'err', 7000); }
  }
  function download() { window.open(`/api/traces/download/${fmtSel.value}`, '_blank'); }
  async function importTraces() {
    try {
      let r;
      if (importFile.files.length) r = await upload('/api/traces/import/upload', importFile.files[0], { replace: true });
      else if (importPath.value) r = await post('/api/traces/import', { path: importPath.value, replace: true });
      else throw new Error('choose a file');
      toast(`Imported ${r.imported} traces`, 'ok'); ctx.refreshStatus(); ctx.emit('traces-changed');
    } catch (e) { toast(e.message, 'err', 7000); }
  }
  async function clearTraces() { if (!confirm('Discard all traces in memory?')) return; await del('/api/traces'); ctx.refreshStatus(); ctx.emit('traces-changed'); }

  el.append(
    h('h2', {}, 'Capture'),
    h('div', { class: 'card' },
      h('div', { class: 'row' }, h('label', {}, 'Traces'), countIn, h('span', { class: 'muted' }, '0 = continuous')),
      h('div', { class: 'row' }, h('label', {}, 'Mode'), modeSel),
      h('div', { class: 'row' }, h('label', {}, 'Key'), keyMode, keyIn),
      h('div', { class: 'row' }, h('label', {}, 'Plaintext'), textMode, textIn),
      h('div', { class: 'row' }, h('label', {}, storeChk, ' store traces'), h('label', {}, clearChk, ' clear first'), h('label', {}, ackChk, ' expect ack')),
      h('div', { class: 'row' }, h('label', {}, 'Display fps'), rateIn, h('label', {}, 'Max cap/s'), throttleIn),
      h('div', { class: 'row' },
        h('button', { class: 'btn', onclick: single }, 'Single'),
        h('button', { class: 'btn primary', onclick: () => start() }, 'Run'),
        h('button', { class: 'btn', onclick: () => start({ count: 0 }) }, 'Continuous'),
        h('button', { class: 'btn danger', onclick: stop }, 'Stop')),
      prog, progTxt),
    h('h2', {}, 'Trace set'),
    h('div', { class: 'card' }, summary,
      h('div', { class: 'row', style: 'margin-top:8px' }, h('label', {}, 'Export'), fmtSel, pathIn),
      h('div', { class: 'row' }, h('button', { class: 'btn', onclick: exportTraces }, 'Save on Studio machine'), h('button', { class: 'btn', onclick: download }, 'Download in browser')),
      h('div', { class: 'row' }, h('label', {}, 'Import'), importFile),
      h('div', { class: 'row' }, h('label', {}, ''), importPath, h('button', { class: 'btn sm', onclick: importTraces }, 'Import')),
      h('div', { class: 'row' }, h('button', { class: 'btn danger sm', onclick: clearTraces }, 'Clear traces'))),
  );

  function updateSummary(t) {
    summary.innerHTML = '';
    [['Traces', t.count], ['Samples', t.samples + (t.uniform ? '' : ' (mixed lengths)')], ['Memory', fmtBytes(t.memory_bytes || 0)]]
      .forEach(([k, v]) => summary.append(h('span', { class: 'k' }, k), h('span', {}, String(v))));
  }
  ctx.on('status', (st) => { updateSummary(st.traces); if (st.job && st.job.name === 'capture') updateProgress(st.job, st.job.running ? 'running' : (st.job.error ? 'error' : 'done')); });
  ctx.on('traces', updateSummary);
  ctx.on('capture', (ev) => updateProgress(ev, ev.state));
  function updateProgress(p, state) {
    const target = p.target || 0;
    prog.max = target || 1; prog.value = target ? p.done : (state === 'running' ? 0 : 1);
    prog.removeAttribute('value'); if (target || state !== 'running') prog.value = target ? p.done : 1;
    const rate = p.rate ? ` · ${p.rate}/s` : '';
    progTxt.textContent = `${state}: ${p.done}${target ? '/' + target : ''} traces${rate} · ${p.timeouts || 0} timeouts · ${p.elapsed || 0}s` + (p.error ? ` · ${p.error}` : '');
    progTxt.className = 'help mono' + (state === 'error' ? ' err' : '');
  }
  return { single, start, stop, params };
}
