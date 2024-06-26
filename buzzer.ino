// C++ code
//
int buzzerpin=5;
void setup()
{
  pinMode(buzzerpin, OUTPUT);
}

void loop()
{
  tone(buzzerpin,1000);
    delay(1000);
    noTone(buzzerpin);
    delay(1000);
}