/*
Autor:Manuela Araujo
Data:10/03/2025
Descricao:Aula 32 -  em semaforo millis
*/ 
#define pinLedVermelho 13
#define pinLedVerde 11
#define pinLedAmarelo 12

unsigned long tempoAnterior = 0;  
int estadoSemaforo = 0;           


void setup()
{
  
  pinMode(pinLedVermelho,OUTPUT);
  pinMode(pinLedVerde,OUTPUT);
  pinMode(pinLedAmarelo,OUTPUT);
}

void loop()
{
   unsigned long tempoAtual = millis();  // Obtém o tempo atual

    // Troca de estado com base no tempo
  switch (estadoSemaforo) {
   case 0: //  Vermelho (5s)
  if (tempoAtual - tempoAnterior >= 5000) {
   digitalWrite(pinLedVermelho, LOW);
   digitalWrite(pinLedVerde, HIGH);
       estadoSemaforo = 1;
       tempoAnterior = tempoAtual;
 } else {
   digitalWrite(pinLedVermelho, HIGH);
   digitalWrite(pinLedVerde, LOW);
   digitalWrite(pinLedAmarelo, LOW);
            }
 break;
case 1: // Verde (5s)
   if (tempoAtual - tempoAnterior >= 5000) {
      digitalWrite(pinLedVerde, LOW);
      digitalWrite(pinLedAmarelo, HIGH);
      estadoSemaforo = 2;
      tempoAnterior = tempoAtual;
            }
 break;
case 2: // Amarelo (2s)
    if (tempoAtual - tempoAnterior >= 2000) {
        digitalWrite(pinLedAmarelo, LOW);
        digitalWrite(pinLedVermelho, HIGH);
        estadoSemaforo = 0;
        tempoAnterior = tempoAtual;
            }
break;
    }
  
  
  
}