import { h } from './api.js';

export function initHelp(ctx, el) {
  el.append(
    h('h2', {}, 'Quick start'),
    h('div', { class: 'card' }, h('ol', { style: 'padding-left:18px;margin:0' },
      h('li', {}, 'Plug in your ChipWhisperer. On Linux install the udev rule shown in the Connect tab first.'),
      h('li', {}, h('b', {}, 'Connect'), ': pick the device (or Auto-detect) and press Connect scope, then Connect target (SimpleSerial v2 for current firmware).'),
      h('li', {}, h('b', {}, 'Target'), ': load a .hex (e.g. simpleserial-aes for your platform) and press Program. Use the serial console to check the target answers.'),
      h('li', {}, h('b', {}, 'Scope'), ': tune gain, samples, offset, trigger; press Single to see a trace and adjust until the waveform looks right.'),
      h('li', {}, h('b', {}, 'Capture'), ': choose a trace count and press Run. The waveform updates live; traces are stored in memory.'),
      h('li', {}, h('b', {}, 'Analysis'), ': run a CPA attack. With a fixed key the PGE (partial guessing entropy) plot shows every byte converging to 0.'),
      h('li', {}, h('b', {}, 'Glitch'), ': define parameter ranges and sweep. Successes light up green in the scatter plot.'),
      h('li', {}, 'Export traces as a ChipWhisperer project (.cwp) or .npz to continue in Python/Jupyter.'))),
    h('h2', {}, 'No hardware?'),
    h('div', { class: 'card' }, 'Choose "Simulator" as the device. It behaves like a CW-Lite attached to an unprotected AES target: traces leak the S-box output, CPA recovers the key in a few hundred traces and glitch sweeps find a success window around ext_offset 20–60 with width 5–40.'),
    h('h2', {}, 'Keyboard'),
    h('div', { class: 'card' }, h('div', { class: 'kv' },
      h('span', { class: 'k' }, 'S'), h('span', {}, 'single capture'),
      h('span', { class: 'k' }, 'R'), h('span', {}, 'run capture'),
      h('span', { class: 'k' }, 'Esc'), h('span', {}, 'stop'),
      h('span', { class: 'k' }, 'Space'), h('span', {}, 'pause/resume display'),
      h('span', { class: 'k' }, '← →'), h('span', {}, 'previous/next trace (browse mode)'),
      h('span', { class: 'k' }, 'drag'), h('span', {}, 'zoom X'),
      h('span', { class: 'k' }, 'double-click'), h('span', {}, 'fit'),
      h('span', { class: 'k' }, 'click / shift+click'), h('span', {}, 'cursor A / B'))),
    h('h2', {}, 'Remote use'),
    h('div', { class: 'card' }, 'Start Studio with ', h('code', {}, '--host 0.0.0.0'), ' on the machine that has the hardware and open ', h('code', {}, 'http://<that-machine>:8765/'), ' from anywhere on the network.'),
    h('h2', {}, 'API'),
    h('div', { class: 'card' }, 'Everything the UI does is available over HTTP: ', h('a', { href: '/api/docs', target: '_blank', style: 'color:var(--accent2)' }, 'interactive API docs'), '. Scripts and CI can drive captures without the browser.'),
    h('div', { class: 'help', style: 'margin-top:12px' }, `ChipWhisperer Studio ${ctx.meta.version}`),
  );
}
