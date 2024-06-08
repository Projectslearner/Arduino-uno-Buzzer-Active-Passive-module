/*
    Project name : Buzzer using Ardino UNO
    Modified Date : 29-05-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-buzzer-active-passive-module
*/

#define BUZZER_PIN 8

void setup()
{
  // Set buzzer pin as OUTPUT
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
  // Turn the buzzer on
  digitalWrite(BUZZER_PIN, HIGH);
  delay(1000);                       // Wait for 1 second

  // Turn the buzzer off
  digitalWrite(BUZZER_PIN, LOW);
  delay(1000);                      // Wait for 1 second
}

