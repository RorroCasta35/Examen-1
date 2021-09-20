float v = 0.0;
float G = 0.0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  //Comunicación con la computadora a una velocidad serial de 9600 bits por segundo (baudios)
}

void loop()
{
  v = analogRead(A0);
  G = -((v*4)/1023-2);
  Serial.print("Aceleración actual: ");
  Serial.print(G);
  Serial.println(" fuerza G");
  delay(1000);
}
