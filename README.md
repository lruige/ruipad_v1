# ruipad_v1
3-key osu keypad made with a cheap fidget toy + Arduino Nano + 1k resistors salvaged from an old board.

<img height="350" alt="image" src="https://github.com/user-attachments/assets/064edb0f-42a9-4c10-82a5-cd236d53fd9d" />

huh?? is this it?? i'll be uploading some photos sometime.. maybe..

upload `ruipad_v1.ino` to your arduino. you can just comment out the if statement at the bottom if you don't want the eye tearing led to blink.

run `ruipad.js` with nodejs. that's it. have (un)fun.


### personal opinion(s)
would this replace your beloved sayodevice? wooting uwu? of course not. is it better than a laptop keyboard? maybe. is it better than an actual keypad / mechanical keyboard? ok, i don't know, the budget is 100₺ and what i can find inside the house.
these typical 4-key-blue-switch fidget toys are relatively cheap and you can find them easily. there's also space to fit a resistor inside the casing too, below the switches, and the pins of the switches are convenitently bent. one thing i was thinking is to put the LED(s) inside the keys but i'll try that on the second iteration i guess.
latency-wise i really don't feel anything and it is pretty comfortable to play with, but of course that's just personal. if you *require* a frame-perfect instant 999999hz polling rate keypad, no, don't go for this
but otherwise i think it's reliable enough to use until i make a second one lulz
one of the biggest downside is that it's not a HID device, so all the data is sent through the serial output which is not..the..best..idea?.. look, this is the best i can do, just take it or leave it


### todo?
sometimes the serial connection gets interrupted. investigate?
config?


