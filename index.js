var five = require("johnny-five");
var board = new five.Board();
var segments = require('./segments.json')
var indeces = require('./src/indeces.js')

board.on("ready", function() {
  var array = new five.Leds([
  	2, 3, 4, 5, 6, 7, 8,
  	9, 10, 11, 12, 13, 14, 15
  ]);

  this.repl.inject({
    array: array,
    segments: segments,
    indeces: indeces
  });
});