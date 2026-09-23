// REST + WebSocket client for ChipWhisperer Studio.

export async function api(method, path, body) {
  const opts = { method, headers: {} };
  if (body !== undefined) {
    opts.headers['Content-Type'] = 'application/json';
    opts.body = JSON.stringify(body);
  }
  const r = await fetch(path, opts);
  if (!r.ok) {
    let detail = r.statusText;
    try { detail = (await r.json()).detail || detail; } catch (e) { /* ignore */ }
    throw new Error(detail);
  }
  const ct = r.headers.get('content-type') || '';
  if (ct.includes('application/json')) return r.json();
  return r;
}
export const get = (p) => api('GET', p);
export const post = (p, b) => api('POST', p, b || {});
export const put = (p, b) => api('PUT', p, b);
export const del = (p) => api('DELETE', p);

export async function upload(path, file, fields = {}) {
  const fd = new FormData();
  fd.append('file', file, file.name);
  const qs = new URLSearchParams(fields).toString();
  const r = await fetch(path + (qs ? '?' + qs : ''), { method: 'POST', body: fd });
  if (!r.ok) {
    let detail = r.statusText;
    try { detail = (await r.json()).detail || detail; } catch (e) { /* ignore */ }
    throw new Error(detail);
  }
  return r.json();
}

/** Decode a binary frame: u32 header length, JSON header, f32 samples. */
export function decodeFrame(buf) {
  const dv = new DataView(buf);
  const hlen = dv.getUint32(0, true);
  const header = JSON.parse(new TextDecoder().decode(new Uint8Array(buf, 4, hlen)));
  const off = 4 + hlen;
  // Float32Array requires 4-byte alignment; copy if needed.
  let samples;
  if (off % 4 === 0) samples = new Float32Array(buf, off);
  else samples = new Float32Array(buf.slice(off));
  return { header, samples };
}

export async function getBinary(path) {
  const r = await fetch(path);
  if (!r.ok) {
    let detail = r.statusText;
    try { detail = (await r.json()).detail || detail; } catch (e) { /* ignore */ }
    throw new Error(detail);
  }
  return decodeFrame(await r.arrayBuffer());
}

/** Tiny event emitter. */
export class Emitter {
  constructor() { this.h = {}; }
  on(k, f) { (this.h[k] = this.h[k] || []).push(f); return () => this.off(k, f); }
  off(k, f) { this.h[k] = (this.h[k] || []).filter((x) => x !== f); }
  emit(k, ...a) { (this.h[k] || []).forEach((f) => { try { f(...a); } catch (e) { console.error(e); } }); (this.h['*'] || []).forEach((f) => f(k, ...a)); }
}

/** WebSocket with auto-reconnect; emits 'open', 'close', and one event per message type. */
export class Socket extends Emitter {
  constructor(url) {
    super();
    this.url = url || ((location.protocol === 'https:' ? 'wss://' : 'ws://') + location.host + '/ws');
    this.ws = null;
    this.connected = false;
    this.retry = 500;
    this.connect();
  }
  connect() {
    const ws = new WebSocket(this.url);
    ws.binaryType = 'arraybuffer';
    ws.onopen = () => { this.connected = true; this.retry = 500; this.emit('open'); };
    ws.onclose = () => {
      this.connected = false; this.emit('close');
      setTimeout(() => this.connect(), this.retry);
      this.retry = Math.min(this.retry * 2, 5000);
    };
    ws.onerror = () => { try { ws.close(); } catch (e) { /* ignore */ } };
    ws.onmessage = (m) => {
      if (m.data instanceof ArrayBuffer) {
        const { header, samples } = decodeFrame(m.data);
        this.emit(header.type, header, samples);
      } else {
        const ev = JSON.parse(m.data);
        this.emit(ev.type, ev);
      }
    };
    this.ws = ws;
  }
}

export function toast(msg, kind = 'info', ms = 4000) {
  const el = document.createElement('div');
  el.className = 'toast ' + kind;
  el.textContent = msg;
  document.getElementById('toasts').appendChild(el);
  setTimeout(() => el.remove(), ms);
}

export function h(tag, attrs = {}, ...children) {
  const el = document.createElement(tag);
  for (const [k, v] of Object.entries(attrs || {})) {
    if (k === 'class') el.className = v;
    else if (k === 'style') el.style.cssText = v;
    else if (k.startsWith('on')) el.addEventListener(k.slice(2), v);
    else if (k === 'html') el.innerHTML = v;
    else if (v !== null && v !== undefined && v !== false) el.setAttribute(k, v === true ? '' : v);
  }
  for (const c of children.flat()) {
    if (c === null || c === undefined || c === false) continue;
    el.appendChild(typeof c === 'string' || typeof c === 'number' ? document.createTextNode(String(c)) : c);
  }
  return el;
}

export function fmtBytes(n) {
  if (n < 1024) return n + ' B';
  if (n < 1048576) return (n / 1024).toFixed(1) + ' KB';
  if (n < 1073741824) return (n / 1048576).toFixed(1) + ' MB';
  return (n / 1073741824).toFixed(2) + ' GB';
}
export function fmtHz(f) {
  if (!f && f !== 0) return '?';
  if (f >= 1e9) return (f / 1e9).toFixed(3) + ' GHz';
  if (f >= 1e6) return (f / 1e6).toFixed(3) + ' MHz';
  if (f >= 1e3) return (f / 1e3).toFixed(1) + ' kHz';
  return f + ' Hz';
}
export function fmtTime(s) {
  const a = Math.abs(s);
  if (a >= 1) return s.toFixed(3) + ' s';
  if (a >= 1e-3) return (s * 1e3).toFixed(3) + ' ms';
  if (a >= 1e-6) return (s * 1e6).toFixed(3) + ' µs';
  return (s * 1e9).toFixed(1) + ' ns';
}
