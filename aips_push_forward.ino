#include <Servo.h>

Servo servo;
int servoPin = 9;  // Pin connected to the servo signal wire
int rotationAngle = 0;  // Initial angle of rotation
int rotationDelay = 25000;  // Delay between rotations in milliseconds
int pauseDuration = 500;  // Duration of the pause in milliseconds

void setup() {
  servo.attach(servoPin);  // Attaching the servo to the pin
}

void loop() {
  // Rotate the servo to the current angle
  servo.write(rotationAngle);

  // Wait for the specified duration
  delay(pauseDuration);

  // Increment the rotation angle
  rotationAngle += 90;

  // Wrap around the angle if it exceeds 180 degrees
  if (rotationAngle > 180) {
    rotationAngle = 0;
  }

  // Wait for the specified delay before the next rotation
  delay(rotationDelay);
}