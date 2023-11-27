const int moisturePin = A1;
const int displayPins[] = {13, 12, 11, 10, 9, 8, 7, 6}; // A, B, C, D, E, F, G, H

byte segments[10] = {
  B1111110, // 0
  B1001000, // 1
  B0111101, // 2
  B1101101, // 3
  B1001011, // 4
  B1100111, // 5
  B1110111, // 6
  B1001100, // 7
  B1111111, // 8
  B1101111  // 9
};

void setup() {
  pinMode(moisturePin, INPUT);
  for (int i = 0; i < 8; ++i) {
    pinMode(displayPins[i], OUTPUT);
  }
}

void loop() {
  int moistureValue = analogRead(moisturePin);
  int moistureLevel = map(moistureValue, 0, 876, 0, 9);

  displayNumber(moistureLevel);
}

void displayNumber(int number) {
  for (int i = 0; i < 8; ++i) {
    digitalWrite(displayPins[i], bitRead(segments[number], i));
  }
}

int main() {
  init();  // Função de inicialização padrão do Arduino
  setup(); // Função de configuração padrão do Arduino

  while (true) {
    loop(); // Função de loop padrão do Arduino
  }

  return 0;
}
