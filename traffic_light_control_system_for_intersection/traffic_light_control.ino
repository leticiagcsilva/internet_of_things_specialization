const int semaforo1_verde = 8;
const int semaforo1_amarelo = 9;
const int semaforo1_vermelho = 10;
const int semaforo2_verde = 5;
const int semaforo2_amarelo = 6;
const int semaforo2_vermelho = 7;

void setup() {
  pinMode(semaforo1_verde, OUTPUT);
  pinMode(semaforo1_amarelo, OUTPUT);
  pinMode(semaforo1_vermelho, OUTPUT);

  pinMode(semaforo2_verde, OUTPUT);
  pinMode(semaforo2_amarelo, OUTPUT);
  pinMode(semaforo2_vermelho, OUTPUT);
}

void loop() {
  // Fase 1
  digitalWrite(semaforo1_verde, HIGH);
  digitalWrite(semaforo1_amarelo, LOW);
  digitalWrite(semaforo1_vermelho, LOW);

  digitalWrite(semaforo2_verde, LOW);
  digitalWrite(semaforo2_amarelo, LOW);
  digitalWrite(semaforo2_vermelho, HIGH);

  delay(8000);

  // Fase 2
  digitalWrite(semaforo1_verde, LOW);
  digitalWrite(semaforo1_amarelo, HIGH);
  digitalWrite(semaforo1_vermelho, LOW);

  digitalWrite(semaforo2_verde, LOW);
  digitalWrite(semaforo2_amarelo, LOW);
  digitalWrite(semaforo2_vermelho, HIGH);

  delay(3000);

  // Fase 3
  digitalWrite(semaforo1_verde, LOW);
  digitalWrite(semaforo1_amarelo, LOW);
  digitalWrite(semaforo1_vermelho, HIGH);

  digitalWrite(semaforo2_verde, LOW);
  digitalWrite(semaforo2_amarelo, LOW);
  digitalWrite(semaforo2_vermelho, HIGH);

  delay(2000);

  // Fase 4
  digitalWrite(semaforo1_verde, LOW);
  digitalWrite(semaforo1_amarelo, LOW);
  digitalWrite(semaforo1_vermelho, HIGH);

  digitalWrite(semaforo2_verde, HIGH);
  digitalWrite(semaforo2_amarelo, LOW);
  digitalWrite(semaforo2_vermelho, LOW);

  delay(8000);

  // Fase 5
  digitalWrite(semaforo1_verde, LOW);
  digitalWrite(semaforo1_amarelo, LOW);
  digitalWrite(semaforo1_vermelho, HIGH);

  digitalWrite(semaforo2_verde, LOW);
  digitalWrite(semaforo2_amarelo, HIGH);
  digitalWrite(semaforo2_vermelho, LOW);

  delay(3000);

  // Fase 6
  digitalWrite(semaforo1_verde, LOW);
  digitalWrite(semaforo1_amarelo, LOW);
  digitalWrite(semaforo1_vermelho, HIGH);

  digitalWrite(semaforo2_verde, LOW);
  digitalWrite(semaforo2_amarelo, LOW);
  digitalWrite(semaforo2_vermelho, HIGH);

  delay(2000);
}

