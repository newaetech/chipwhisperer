import { h, get, post, toast } from './api.js';

export function initConnect(ctx, el) {
  const meta = ctx.meta;
  const scopeSel = h('select', { class: 'flex' }, ...Object.entries(meta.scope_kinds).map(([k, v]) => h('option', { value: k }, v.label)));
  const snInput = h('input', { class: 'flex mono', placeholder: 'serial number (optional)' });
  const forceChk = h('input', { type: 'checkbox' });
  const setupChk = h('input', { type: 'checkbox', checked: true });
  const devList = h('div', { class: 'help' }, 'Click Scan to list connected NewAE devices.');
  const targetSel = h('select', { class: 'flex' }, ...Object.entries(meta.target_kinds).map(([k, v]) => h('option', { value: k }, v.label)));
  const info = h('div', { class: 'kv' });
  const btnConnect = h('button', { class: 'btn primary', onclick: connect }, 'Connect scope');
  const btnDisconnect = h('button', { class: 'btn', onclick: async () => { await post('/api/scope/disconnect'); toast('Scope disconnected'); ctx.refreshStatus(); } }, 'Disconnect');
  const btnTarget = h('button', { class: 'btn primary', onclick: connectTarget }, 'Connect target');
  const btnTargetDis = h('button', { class: 'btn', onclick: async () => { await post('/api/target/disconnect'); ctx.refreshStatus(); } }, 'Disconnect');
  const btnScan = h('button', { class: 'btn', onclick: scan }, 'Scan USB');

  if (new URLSearchParams(location.search).get('simulate') === '1' || meta.simulate_default) { scopeSel.value = 'sim'; targetSel.value = 'sim'; }
  scopeSel.addEventListener('change', () => { if (scopeSel.value === 'sim') targetSel.value = 'sim'; else if (targetSel.value === 'sim') targetSel.value = 'SimpleSerial2'; });

  async function scan() {
    btnScan.disabled = true;
    try {
      const devs = await get('/api/devices');
      devList.innerHTML = '';
      if (!devs.length) devList.append('No NewAE USB devices found.');
      devs.forEach((d) => devList.append(h('div', { class: d.error ? 'err' : '' }, `${d.name}${d.sn ? '  sn=' + d.sn : ''}${d.hw_loc ? '  (bus ' + d.hw_loc[0] + ', addr ' + d.hw_loc[1] + ')' : ''}`,
        d.sn ? h('button', { class: 'link', onclick: () => { snInput.value = d.sn; } }, 'use') : null)));
    } catch (e) { toast(e.message, 'err'); } finally { btnScan.disabled = false; }
  }
  async function connect() {
    btnConnect.disabled = true; btnConnect.textContent = 'Connecting…';
    try {
      const r = await post('/api/scope/connect', { kind: scopeSel.value, sn: snInput.value || null, force: forceChk.checked, default_setup: setupChk.checked });
      toast(`Connected: ${r.name || r.type}`, 'ok');
      await ctx.refreshStatus();
      if (scopeSel.value === 'sim' || targetSel.value === 'sim') await connectTarget();
      ctx.showTab('scope');
    } catch (e) { toast(e.message, 'err', 8000); } finally { btnConnect.disabled = false; btnConnect.textContent = 'Connect scope'; }
  }
  async function connectTarget() {
    btnTarget.disabled = true;
    try {
      await post('/api/target/connect', { kind: targetSel.value });
      toast('Target connected', 'ok');
      await ctx.refreshStatus();
    } catch (e) { toast(e.message, 'err', 8000); } finally { btnTarget.disabled = false; }
  }

  const plat = meta.platform || {};
  const platCard = h('div', { class: 'card' }, h('h2', {}, `Platform: ${plat.os || '?'}`), h('div', { class: 'help' }, plat.note || ''));
  if (plat.udev_install_cmd) {
    platCard.append(h('div', { class: 'help' }, 'Linux needs a udev rule so you can access the device without root:'),
      h('pre', { class: 'code' }, plat.udev_install_cmd),
      h('button', { class: 'btn sm', onclick: () => { navigator.clipboard.writeText(plat.udev_install_cmd); toast('Copied'); } }, 'Copy command'));
  }
  if (plat.driver_url) platCard.append(h('a', { href: plat.driver_url, target: '_blank', style: 'color:var(--accent2)' }, 'Windows driver instructions'));

  el.append(
    h('h2', {}, 'Scope'),
    h('div', { class: 'card' },
      h('div', { class: 'row' }, h('label', {}, 'Device'), scopeSel),
      h('div', { class: 'row' }, h('label', {}, 'Serial'), snInput, btnScan),
      devList,
      h('div', { class: 'row' }, h('label', {}, forceChk, ' force FPGA reprogram'), h('label', {}, setupChk, ' default_setup()')),
      h('div', { class: 'row' }, btnConnect, btnDisconnect)),
    h('h2', {}, 'Target'),
    h('div', { class: 'card' },
      h('div', { class: 'row' }, h('label', {}, 'Protocol'), targetSel),
      h('div', { class: 'help' }, 'Most current firmware (simpleserial-aes etc.) uses SimpleSerial v2. Older hex files use v1.'),
      h('div', { class: 'row' }, btnTarget, btnTargetDis)),
    h('h2', {}, 'Status'), h('div', { class: 'card' }, info),
    platCard,
  );

  ctx.on('status', (st) => {
    info.innerHTML = '';
    const rows = [['Scope', st.scope.connected ? `${st.scope.name || st.scope.type}${st.scope.sn ? ' (sn ' + st.scope.sn + ')' : ''}` : 'not connected'],
      ['Firmware', st.scope.fw_version ? JSON.stringify(st.scope.fw_version) : '-'],
      ['Target', st.target.connected ? st.target.type : 'not connected'],
      ['Traces', `${st.traces.count} (${st.traces.samples} samples)`],
      ['Data dir', st.data_dir]];
    rows.forEach(([k, v]) => info.append(h('span', { class: 'k' }, k), h('span', {}, String(v))));
  });
}
