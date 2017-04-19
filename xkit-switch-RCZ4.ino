void setup() {
  delay(10000);
  Serial.begin(9600);
  Serial.println("AT$DR=922300000");
  delay(50);
  Serial.println("ATS400=<00000000><F0000000><0000001F>,63");
  delay(50);
  Serial.println("AT$WR");

}

void loop() {}
