// inicia o sensor
int sensorValue = 0;

void setup()
{
// seta o input e o output utilizados
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // le o valor
  sensorValue = analogRead(A0);
  // mostra no "Serial Monitor" do tinkercad
  Serial.println(sensorValue);
  // mapea o valor do LED
  analogWrite(9, map(sensorValue, 0, 1023, 0, 255)); // mostra 1023 no leitor
  delay(100); // espera
}
