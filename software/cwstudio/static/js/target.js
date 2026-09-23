import { h, get, post, upload, toast } from './api.js';
import { SettingsTree } from './settings.js';

export function initTarget(ctx, el) {
  const meta = ctx.meta;
  // --- programming ---
  const progSel = h('select', { class: 'flex' }, ...Object.entries(meta.programmers).map(([k, v]) => h('option', { value: k }, v.label)));
  const fileIn = h('input', { type: 'file', accept: '.hex,.bin,.elf', class: 'flex' });
  const pathIn = h('input', { class: 'flex mono', placeholder: 'or path on the machine running Studio' });
  const progStatus = h('div', { class: 'help' });
  const btnProg = h('button', { class: 'btn primary', onclick: program }, 'Program target');
  async function program() {
    btnProg.disabled = true; progStatus.textContent = 'Programming… (watch the log)'; progStatus.className = 'help';
    try {
      let r;
      if (fileIn.files.length) r = await upload('/api/target/program/upload', fileIn.files[0], { programmer: progSel.value });
      else if (pathIn.value) r = await post('/api/target/program', { programmer: progSel.value, path: pathIn.value });
      else throw new Error('choose a firmware file');
      progStatus.textContent = `Done: ${r.bytes} bytes written${r.simulated ? ' (simulated)' : ''}`; progStatus.className = 'help ok';
      toast('Target programmed', 'ok');
    } catch (e) { progStatus.textContent = e.message; progStatus.className = 'help err'; toast(e.message, 'err', 8000); } finally { btnProg.disabled = false; }
  }

  // --- serial console ---
  const consoleEl = h('div', { class: 'console' });
  const lineIn = h('input', { class: 'flex mono', placeholder: 'text to send (Enter)', onkeydown: (e) => { if (e.key === 'Enter') send(); } });
  const hexChk = h('input', { type: 'checkbox' });
  const nlChk = h('input', { type: 'checkbox', checked: true });
  async function send() {
    if (!lineIn.value) return;
    try { await post('/api/target/serial/write', { data: lineIn.value, hex: hexChk.checked, newline: nlChk.checked }); lineIn.value = ''; } catch (e) { toast(e.message, 'err'); }
  }
  function appendConsole(rec) {
    const span = h('span', { class: rec.dir }, (rec.dir === 'tx' ? '→ ' : '← ') + (showHex.checked ? rec.hex + ' ' : rec.data.replace(/\n/g, '⏎\n')) + (rec.data.endsWith('\n') || showHex.checked ? '\n' : '\n'));
    consoleEl.append(span);
    while (consoleEl.childNodes.length > 500) consoleEl.removeChild(consoleEl.firstChild);
    consoleEl.scrollTop = consoleEl.scrollHeight;
  }
  const showHex = h('input', { type: 'checkbox' });

  // --- simpleserial ---
  const ssCmd = h('input', { class: 'mono', value: 'p', style: 'width:40px', maxlength: 1 });
  const ssData = h('input', { class: 'flex mono', value: '00112233445566778899aabbccddeeff', placeholder: 'hex payload' });
  const ssLen = h('input', { type: 'number', value: 16, style: 'width:60px', title: 'expected response length' });
  const ssResp = h('div', { class: 'code', style: 'min-height:20px' });
  async function ssSend() {
    try { const r = await post('/api/target/simpleserial', { cmd: ssCmd.value || 'p', data: ssData.value, read_len: +ssLen.value }); ssResp.textContent = r.response ? 'r ' + r.response : '(no response)'; } catch (e) { toast(e.message, 'err'); }
  }
  const keyIn = h('input', { class: 'flex mono', value: '2b7e151628aed2a6abf7158809cf4f3c', placeholder: 'key hex' });
  async function setKey() { try { await post('/api/target/simpleserial', { cmd: 'k', data: keyIn.value, read_len: 0 }); toast('Key sent', 'ok'); } catch (e) { toast(e.message, 'err'); } }

  // --- target settings tree ---
  const treeEl = h('div');
  const tree = new SettingsTree(treeEl, { load: () => get('/api/target/settings'), save: (p, v) => ctx.saveSetting('target', p, v) });
  tree.onError = (p, m) => toast(`${p}: ${m}`, 'err', 6000);

  el.append(
    h('h2', {}, 'Program firmware'),
    h('div', { class: 'card' },
      h('div', { class: 'row' }, h('label', {}, 'Programmer'), progSel),
      h('div', { class: 'row' }, h('label', {}, 'Hex file'), fileIn),
      h('div', { class: 'row' }, h('label', {}, ''), pathIn),
      h('div', { class: 'row' }, btnProg), progStatus,
      h('div', { class: 'help' }, 'Build firmware from firmware/mcu/… in the ChipWhisperer repo (e.g. make PLATFORM=CW308_STM32F3 CRYPTO_TARGET=TINYAES128C) and load the resulting .hex here.')),
    h('h2', {}, 'SimpleSerial'),
    h('div', { class: 'card' },
      h('div', { class: 'row' }, h('label', {}, 'Key'), keyIn, h('button', { class: 'btn sm', onclick: setKey }, 'Send key')),
      h('div', { class: 'row' }, h('label', {}, 'Command'), ssCmd, ssData, ssLen, h('button', { class: 'btn sm', onclick: ssSend }, 'Send')),
      ssResp),
    h('h2', {}, 'Serial console'),
    h('div', { class: 'card' },
      consoleEl,
      h('div', { class: 'row', style: 'margin-top:6px' }, lineIn, h('button', { class: 'btn sm', onclick: send }, 'Send')),
      h('div', { class: 'row' }, h('label', {}, hexChk, ' send hex'), h('label', {}, nlChk, ' newline'), h('label', {}, showHex, ' show hex'),
        h('button', { class: 'link', onclick: () => { consoleEl.innerHTML = ''; } }, 'clear'))),
    h('h2', {}, 'Target settings'),
    h('div', { class: 'card' }, h('div', { class: 'row' }, h('button', { class: 'btn sm', onclick: () => tree.refresh() }, '↻ Refresh')), treeEl),
  );

  ctx.on('serial', appendConsole);
  ctx.on('target-connected', () => tree.refresh());
  ctx.on('target-disconnected', () => tree.refresh());
  return { tree };
}
