void setup() {
  // put your setup code here, to run once:

  // This should match the serial speed configured in VSCode
  Serial.begin(9600);

  // Allow time for the serial monitor to start
  delay(3000);

  Serial.println("Hello World!");
}

void loop() {
  // main code
}
