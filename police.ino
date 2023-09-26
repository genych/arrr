float i = 0;
int r = 255;
int b = 0;

void setup() {}

void loop() {
  r--;
  if (r < 0) {
    r = 255;
  }
  
  b++;
  if (b > 255) {
    b = 0;
  }
  
  i += 0.02;
  int freq = 500 + sin(i) * 50;
  tone(6, freq, 1000);
  
  analogWrite(9, r);
  analogWrite(10, b);

  delay(5);
}