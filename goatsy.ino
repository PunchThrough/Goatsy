int BlueRight = 0,
    GreenRight = 1, //broken ##needs re-solder
    RedRight = 2,
    BlueLeft = 3,
    GreenLeft = 4,
    RedLeft = 5;

void setup() {
  pinMode(BlueRight, OUTPUT);
  pinMode(GreenRight, OUTPUT); //broken
  pinMode(RedRight, OUTPUT);
  pinMode(BlueLeft, OUTPUT);
  pinMode(GreenLeft, OUTPUT);
  pinMode(RedLeft, OUTPUT);
}

void loop() {
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(500);
  digitalWrite(RedRight, LOW);
  digitalWrite(RedLeft, LOW);
  delay(50);
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(100);
  digitalWrite(RedRight, LOW);
  digitalWrite(RedLeft, LOW);
  delay(200);
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(100);
  digitalWrite(RedRight, LOW);
  digitalWrite(RedLeft, LOW);
  delay(200);
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(750);
  digitalWrite(RedRight, HIGH);
  digitalWrite(RedLeft, HIGH);
  delay(100);
  digitalWrite(RedRight, LOW);
  digitalWrite(RedLeft, LOW);
  delay(200);
  digitalWrite(RedRight, LOW);
  digitalWrite(RedLeft, LOW);
  delay(500);
  Bean.sleep(750);
}
