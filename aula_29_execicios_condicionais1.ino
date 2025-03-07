/*
Nome do arquivo:Exercicios condicionais
Autor:Manuela Araujo
Data:27/02/2025
Descricao:Exercicio condicionais
*/

#define pinLedLaranja 7
void setup()
{
  Serial.begin(9600);
 pinMode(pinLedLaranja,OUTPUT);
  
  int temperatura =35; 
if (temperatura  >=30){
digitalWrite(pinLedLaranja, HIGH);

}
}
void loop()
{
  
}

