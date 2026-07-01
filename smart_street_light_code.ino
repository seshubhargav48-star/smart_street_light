const int IR1 = 2;
const int IR2 = 3;
const int LED1 = 5;
const int LED2 = 6;
const int LDR = A0;

int ldrThreshold = 300; 
// Lower value usually means darker in many LDR divider setups.
// You may need to adjust this after testing.

void setup() {
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LDR, INPUT);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);

  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(LDR);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Default OFF
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);

  // If dark, then allow smart lighting
  if (ldrValue < ldrThreshold) {
    int ir1State = digitalRead(IR1);
    int ir2State = digitalRead(IR2);

    if (ir1State == HIGH) {
      digitalWrite(LED1, HIGH);
      Serial.println("Object detected at Sensor 1 -> LED1 ON");
    }

    if (ir2State == HIGH) {
      digitalWrite(LED2, HIGH);
      Serial.println("Object detected at Sensor 2 -> LED2 ON");
    }
  } else {
    Serial.println("Daytime -> All lights OFF");
  }

  delay(200);
}

//
const int IR1 = 2;
const int IR2 = 3;
const int LED1 = 5;
const int LED2 = 6;
const int LED3 = 7;
const int LDR = A0;

int ldrThreshold = 300;

void setup() {
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(LDR);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);

  if (ldrValue < ldrThreshold) {
    if (digitalRead(IR1) == HIGH) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
    }

    if (digitalRead(IR2) == HIGH) {
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
    }
  }

  delay(200);
}
