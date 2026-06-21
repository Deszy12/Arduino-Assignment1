int startValue = 5;
int ledPin = 13;


void flashLED(int times){


  while(times>0){
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
  times -- ;
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  
  Serial.println("======Smart countdown starting=====");



  while(startValue > 0){
    Serial.print("count: ");
    Serial.println(startValue);
   flashLED(startValue);
  delay(1000);

  startValue --;
  }
  Serial.println("======Countdown complete=====");
}





void loop() {
  // put your main code here, to run repeatedly:

}










