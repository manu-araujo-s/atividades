/*
Nome do arquivo:Exercicios condicionais
Autor:Manuela Araujo
Data:28/02/2025
Descricao:Exercicio condicionais
*/ 
void setup()
{
  int nota1 =8;
  int nota2 =6;
  int nota3 =7;
  int nota4 =5;
  float media =0;
  
  media = (nota1 + nota2 + nota3 + nota4)/4;
  Serial.println("resultado");
  
  if (media>=7){
    Serial.println("Aprovado"); 
}
  if (media<=5&& media>=5){
    Serial.println("Recuperacao");
  }
  if(media<=5){
    Serial.println("Reprovado");


void loop()
{
  
}