int ledPin = 13; //pin13 == ledPin
int inPin = 2; // pin2 = inPin
int val = 0; 
void setup(){
pinMode(ledPin, OUTPUT); // declare LED as output
pinMode(inPin, INPUT); // declare pushbutton as input
}
void loop(){
val = digitalRead(inPin); 
if (val == HIGH) { 
digitalWrite(ledPin, LOW);
} else {
digitalWrite(ledPin, HIGH); 
}
}
