void setup(){
  pinMode (A0 , INPUT);
  Serial.begin(9699);
}
void loop(){
  float volt;
  delay(500);
  volt=analogRead(A0);
  Serial.println(volt);
}
