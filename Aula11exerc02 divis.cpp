#include<stdio.h>  //biblioteca para usar a função printf() e scanf()
#include<stdlib.h> //biblioteca para usar a função system()

main()
{  //ALGORITMO 
   int n1, n2, d;   // DECLARE N1, N2 e d NUMERICO
   printf("Informe 1o. numero: ");  // ESCREVA “Informe o 1º número:”
   scanf("%d",&n1); // LEIA N1
   printf("Informe 2o. numero: ");  // ESCREVA “Informe o 2º número:”
   scanf("%d",&n2); // LEIA N2
   if (n2 == 0) //SE (N2 = 0) 
     printf("Impossivel dividir\n"); //ENTÃO ESCREVA “Impossível divisão por 0”
   else //SENÃO
   {   //INICIO
       d = n1 / n2; // D <- N1 * N2
       printf("Resultado = %d\n",d); // ESCREVA “Resultado = “, D
   } //FIM
   system("PAUSE"); //Função para pausar o programa
}  //FIM_ALGORITMO 



 



