/*
Nome do arquivo:Exercicio
Autor:Manuela Araujo
Data:26/02/2025
Descricao:Exercicio
*/ 

void setup()
{  
  
Serial.begin(9600); 

float peso = 53;
float altura = 1.54;
float resultadoReal = 0;

resultadoReal = (float)altura *(float)altura;
Serial.print("altura ao quadrado eh:");
Serial.println(resultadoReal);
  
resultadoReal = peso/resultadoReal;
Serial.print("o resultado do IMC eh:");
Serial.println(resultadoReal);
  

  

  Serial.begin(9600);
  
  int MeuPeso = 70;
  float MinhaAltura = 1.58;
  
  float IMC = 0;
  
  IMC = MeuPeso / sq(MinhaAltura);
  Serial.println(IMC);
   
  if(IMC < 17){
    Serial.println("Muito baixo do ideal");

  }else if(IMC >= 17 && IMC < 18.49){
    Serial.println("Abaixo do peso");
    
  }else if(IMC >= 18,5 && IMC < 24.99){
    Serial.println("Peso normal");
  
  }else if(IMC >= 30 && IMC < 34.99){
     Serial.println("Obesidade grau 1");
    
  }else if(IMC >= 35 && IMC < 36.99){
    Serial.println("Obesidade grau 2");
    
  }else if(IMC > 40){
    Serial.println("Obesidade grau 3");
  }
}
 
void loop()
{
  
}

  


