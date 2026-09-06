const robot = require('robotjs');

const LOG = true
const COM = 'COM4'
const KEYS = ["a", "z", "escape"]

const { SerialPort } = require('serialport')
const port = new SerialPort({ path: COM, baudRate: 9600 })

const keypress = [false, false, false]

port.on('open', function() {
		console.log("Ready!");
})

port.on('data', function(data) {
  pd = data.toString().split("\n");
  if (LOG) console.log(pd)
  for (let i = 0; i < pd.length; i++) {
    if (pd[i] == '') return;

    const to_set = (pd[i][0] == "1") ? 'down' : 'up';

    if (LOG) console.log(KEYS[pd[i][1]])
    robot.keyToggle(KEYS[pd[i][1]], to_set)
    
  }
})