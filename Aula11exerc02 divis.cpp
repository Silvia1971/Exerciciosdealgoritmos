#include<stdio.h>  //biblioteca para usar a fun��o printf() e scanf()
#include<stdlib.h> //biblioteca para usar a fun��o system()

main()
{  //ALGORITMO 
   int n1, n2, d;   // DECLARE N1, N2 e d NUMERICO
   printf("Informe 1o. numero: ");  // ESCREVA �Informe o 1� n�mero:�
   scanf("%d",&n1); // LEIA N1
   printf("Informe 2o. numero: ");  // ESCREVA �Informe o 2� n�mero:�
   scanf("%d",&n2); // LEIA N2
   if (n2 == 0) //SE (N2 = 0) 
     printf("Impossivel dividir\n"); //ENT�O ESCREVA �Imposs�vel divis�o por 0�
   else //SEN�O
   {   //INICIO
       d = n1 / n2; // D <- N1 * N2
       printf("Resultado = %d\n",d); // ESCREVA �Resultado = �, D
   } //FIM
   system("PAUSE"); //Fun��o para pausar o programa
}  //FIM_ALGORITMO 



 



