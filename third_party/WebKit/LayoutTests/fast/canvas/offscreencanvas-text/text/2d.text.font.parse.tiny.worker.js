// DO NOT EDIT! This test has been generated by tools/gentest.py.
// OffscreenCanvas test in a worker:2d.text.font.parse.tiny
// Description:
// Note:

importScripts("../../../../resources/testharness.js");
importScripts("../resources/canvas-tests.js");

function deferTest() {
  _deferred = true;
}

var t = async_test("");
t.step(function() {

var offscreenCanvas = new OffscreenCanvas(100, 50);
var ctx = offscreenCanvas.getContext('2d');

ctx.font = '1px sans-serif';
_assertSame(ctx.font, '1px sans-serif', "ctx.font", "'1px sans-serif'");

t.done();

});
done();
