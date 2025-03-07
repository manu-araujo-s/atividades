/*
Nome do arquivo:Exercicios condicionais
Autor:Manuela Araujo
Data:27/02/2025
Descricao:Exercicio condicionais
*/ 

#define pinLedVerde 12

int numeroA=6;
int numeroB=2;
int resultado= 0;
void setup()
{
Serial.begin(96000);
 pinMode(pinLedVerde,OUTPUT);
pinMode(pinLedVerde,HIGH);
resultado=(numeroA % numeroB);
if(resultado ==0);
  
}


void loop()
{

}