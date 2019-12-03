
// inialisasi pin sensor getaran gempa dan pin buzzer
const int pinSensorGempa = 10;
const int pinBuzzer = 9;

// inialisasi variabel pembacaan sensor
boolean bacaSensor;

void setup() {
  // Inialisasi status I/o pin
  pinMode(pinSensorGempa, INPUT);
  pinMode(pinBuzzer, OUTPUT);
  // buzzer dimatikan
  digitalWrite(pinBuzzer, HIGH);
}
void loop() {
  // membaca data sensor
  bacaSensor = digitalRead(pinSensorGempa);
  // jika terdeteksi getaran gempa
  // terbaca output sensor "1" atau logic HIGH

  if (bacaSensor == 1) {
    // buzzer menyala
    digitalWrite(pinBuzzer, LOW);
    digitalWrite(pinBuzzer, HIGH);
  }
  else if (bacaSensor == 0) {
    // buzzer dimatikan
    digitalWrite(pinBuzzer, HIGH);
  }
}
