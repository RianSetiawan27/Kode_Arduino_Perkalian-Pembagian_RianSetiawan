int A = 10;   
int B = 2; 
int ACC = 0; 

int ledMerah = 10;
int ledHijau = 8;

void setup() {
  Serial.begin(9600);

  pinMode(ledMerah, OUTPUT);
  pinMode(ledHijau, OUTPUT);

  Serial.println("=== Simulasi Proses Aritmatika Mikroprosesor ===");

  // Perkalian
  Serial.println("\n[Instruksi 1] MUL A, B");
  ACC = A * B;
  Serial.print("Register A = "); Serial.println(A);
  Serial.print("Register B = "); Serial.println(B);
  Serial.print("Accumulator (A * B) = "); Serial.println(ACC);

  if (ACC > 15) {
    digitalWrite(ledHijau, HIGH);
    digitalWrite(ledMerah, LOW);
    Serial.println("Hasil > 15: LED Hijau ON");
  } else {
    digitalWrite(ledMerah, HIGH);
    digitalWrite(ledHijau, LOW);
    Serial.println("Hasil <= 15: LED Merah ON");
  }

  // Pembagian
  Serial.println("\n[Instruksi 2] DIV A, B");

  if (B != 0) { 
    ACC = A / B;
    Serial.print("Register A = "); Serial.println(A);
    Serial.print("Register B = "); Serial.println(B);
    Serial.print("Accumulator (A / B) = "); Serial.println(ACC);
  } else {
    Serial.println("Error: Pembagian dengan 0!");
    ACC = 0;
  }

  if (ACC > 15) {
    digitalWrite(ledHijau, HIGH);
    digitalWrite(ledMerah, LOW);
    Serial.println("Hasil > 15: LED Hijau ON");
  } else {
    digitalWrite(ledMerah, HIGH);
    digitalWrite(ledHijau, LOW);
    Serial.println("Hasil <= 15: LED Merah ON");
  }
}

void loop() {
}
