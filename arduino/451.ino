  int inputPin = 4;               // choose the input pin (for PIR sensor)
  int pirState = LOW;             // we start, assuming no motion detected
  int val = 0;   
  long duration; // variable for the duration of sound wave travel
  float distance; // variable for the distance measurement
  #define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
  #define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04
  int movement = 0;
  
  void setup() {
  pinMode(inputPin, INPUT);     // declare sensor as input
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600);

}

void loop() {
val = digitalRead(inputPin);  // read input value


//PIR MOTION DETECTER

  if (val == HIGH) {            // check if the input is HIGH
    delay(300);
    movement = 1;
    //tell TouchDesigner that something moved
    if (pirState == LOW) {
      // we have just turned on
      
      // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    delay(300);
    //tell touchdesigner we aren't moving
    if (pirState == HIGH){
      // we have just turned of
      movement = 0;
      // We only want to print on the output change, not state
      pirState = LOW;
    }
  }

//ULTRASONIC DISTANCE SENSOR

   // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  distance = (1/distance)*2000;

 //Heart-rate
float heart = 61;
int output = 0;
if (heart < 100 && heart > 60) {
  heart = heart + ((rand() % 100)*0.03);
  heart = heart - ((rand() % 100)*0.01);
}
if (heart >= 61) {
  output = 0;
}
if (heart < 61) {
  output = 1;
}




 //final print
 Serial.print(distance);
 Serial.print("#");
 Serial.print(movement);
 Serial.print("#");
 Serial.println(output);

}



 
