/*
Nome do arquivo:Matematica
Autor:Manuela Araujo
Data:24/02/2025
Descricao:Este codigo
*/


//********DECLARACAO DE VARIAVEIS GLOBAIS********
int numeroA = 10;
int numeroB = 3;
int resultado = 0;
float resultadoReal = 0;
int numero = 3;

void setup()
{
 Serial.begin (9600);//baud rate bit's por segundo (bps)
  
  //****SOMA*****
  resultado = numeroA + numeroB; 
  Serial.print("a soma do numeroA com o numeroB eh: ");
  Serial.println(resultado);
  
  //****SUBTRACAO****
  resultado= numeroB - numeroA;
  Serial.print("A subtracao do numero B pelo A eh: ");
  Serial.println(resultado);
  
  //****MULTIPLICACAO****
  resultado = numeroA * numeroB;
  Serial.print("A multiplicacao do numeroA pelo numeroB eh: ");
  Serial.println(resultado);
  
  
 //****DIVISAO****
  resultado = numeroA / numeroB;
  Serial.print("A divisao de A por B eh: ");
  Serial.println(resultado);
  resultado= numeroA % numeroB; //retorna o restoda divisao 
  Serial.print("e sobra");
  Serial.println(resultado);
  
  
  ///DIVISAO CO NUMEROS DECIMAIS
  resultadoReal = (float)numeroA / (float)numeroB;
  Serial.println(resultadoReal,1); //mostra apenas uma casa decimal
   
  //*****POTENCIACAO*****
  resultado= pow(numeroA, numeroB); //numeroA elevado a numeroB
  Serial.print("numero A elevado a numero B:");
  Serial.println(resultadoReal,0);// sem casas decimais 
  
  //****AO QUADRADO*****
  resultado= sq(numeroB);//square (quadrado)
  Serial.print("numeroB ao quadrado:");
  
    
  //****RAIZ QUADRADA****
  resultadoReal = sqrt(numeroA);//square root(raiz quadrada)
  Serial.print("o quadrado de numeroA:");
  Serial.print(resultadoReal);
  
  //****MODULO****
  resultado=abs(numeroA *-1);
  Serial.println(resultado);
  
  //****RESTRICAO****
  
 resultado= constrain(numeroA,4,8);// estourou o limite superior 
 Serial.println(resultado);
 resultado= constrain(numeroB,4,8);//estorou o limite inferior
 Serial.println(resultado);
 resultado= constrain(numeroA,0,100);// dentro do limite
 Serial.println(resultado);
  
  //*****REPAMEAMENTO*****
  
  resultado = map (511,200,1023,-3,7);
  //map(valor,deMenor,Demaior,Paramenor,Paramaior);
  Serial.println(resultado);
  //
  Serial.println(resultado);
  
  //****OPERADORES DE ATRIBUICAO***
  //INCREMENTO (+1)
  numeroA = numeroA;
  numeroA++;//numeroA = numeroA +1;
  
  //INCREMENTO (+1)
  //numero = numeroA + 1;
  numeroA++; //pos incremento
  ++numeroA; //pre incremento
  
  //DECREMENTO (-1)
  //numeroA = numeroA - 1;
  numeroA--; //pos decremento
  --numeroA; //pre decremento
  
  //numeroA = numeroA + 3;
  numero +=3;

//numeroA = numeroA -3;
numero-=3;

//numeroA = numeroA *3;
numero *= 3;

//numeroA = numeroA / 5;
numeroA /= 5;
 
}



void loop()
{
  
}