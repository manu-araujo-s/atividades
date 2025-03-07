/*
Nome do arquivo:Exercicios condicionais
Autor:Manuela Araujo
Data:27/02/2025
Descricao:Exercicio condicionais
*/
void setup()
{
 #define pinLedVermelho 8 

 Serial.begin(9600); 
 pinMode(pinLedVermelho, OUTPUT);
 int bateria = 18;
  if (bateria <= 20);{
 digitalWrite(pinLedVermelho,HIGH);
}
}
void loop()
{
  
}