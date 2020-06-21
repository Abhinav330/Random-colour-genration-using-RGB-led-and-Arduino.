// This Code is created by Abhinav .

// explanation and circuit digram at  https://youtu.be/2gyLepi4EII

long x , y, z;
void setup() {
  pinMode(3,OUTPUT); //red  
  pinMode(5,OUTPUT); // green
  pinMode(6,OUTPUT);  // blue
}

void loop() {
  x = random(225);
  y = random(225);
  z = random(225);
analogWrite(3,x);
analogWrite(5,y);
analogWrite(6,z);
delay(400);
}
