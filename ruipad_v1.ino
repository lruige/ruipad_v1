// https://github.com/DylanMeeus/ArduinoNano_KeyInput/blob/master/NanoCode_pde/NanoCode_pde.ino

/**
  Code to make the keyswitch tester come alive
*/


const int buttons = 3;
const int buttonPins[] = {2,3,9};
const int ledPin = A3;

int pressed = 0;

// Each index represents a corresponding pin, e.g buttonPressed[1] is the state of buttonPins[1]
boolean buttonPressed[] = {false,false,false};

// Output, this also corersponds to the pin in the buttonPins[] like buttonPressed[]
char charOut[] = {'0','1','2'};

void setup(){
  
  Serial.begin(9600);
  for(int i = 0; i < buttons; i++){
   pinMode(buttonPins[i],INPUT_PULLUP); 
  }
  pinMode(ledPin, OUTPUT);
      
}

void loop(){
  
  for(int i = 0; i < buttons; i++){
    int buttonState = digitalRead(buttonPins[i]);
    if(buttonState == LOW){
      
      if(!buttonPressed[i]){
        Serial.println(String("1") + charOut[i]);
        buttonPressed[i] = true;
        pressed = 1;
        delay(5);
      }
    } else {
      if(buttonPressed[i]) {
        Serial.println(String("0") + charOut[i]);
        buttonPressed[i] = false;
        delay(5);
      }
    }
  }
  if (!buttonPressed[0] && !buttonPressed[1] && !buttonPressed[2]) {
  //if (true) {
    digitalWrite(ledPin, LOW);
  }
  else {
    analogWrite(ledPin, 512);
  }
}
