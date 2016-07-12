

// Color Mix LEDs with knobs!

#define pinW 3
#define pinB 5
#define pinG 9
#define pinR 11

#define potW A0
#define potB A1
#define potG A2
#define potR A3

//this will be the value returned from the potentiometer
// connect 5V & read the resistance change from rotating
// values range from 0 - 1023
int wpv;
int bpv;
int gpv;
int rpv;

// conversion metric for taking pot values and controlling brightness
// LED brightness controlled with PWM values 0 - 255 

float r = 0.24926;
//float r = 0.09775;


void setup() {
  Serial.begin(9600);  
  pinMode(pinW, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinR, OUTPUT);
}

void loop() {
  wpv = analogRead(potW) * r;
  bpv = analogRead(potB) * r;
  gpv = analogRead(potG) * r;
  rpv = analogRead(potR) * r;
  analogWrite(pinW, wpv);
  analogWrite(pinB, bpv); 
  analogWrite(pinG, gpv); 
  analogWrite(pinR, rpv); 
}


