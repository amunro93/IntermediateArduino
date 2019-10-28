//_0.ino

int led = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    analogWrite(3, 50);  // turn the LED on (HIGH is the voltage level)
    delay(50);               // wait for a second
    analogWrite(3, 75);   // turn the LED off by making the voltage LOW
    delay(50);               // wait for a second
    analogWrite(3, 100);
    delay(50);
    analogWrite(3, 250);
    delay(50);
    analogWrite(3, 100);
    delay(50);
    analogWrite(3, 75);
    delay(50);
    analogWrite(3, 50);
    delay(50);
}
