#include<stdio.h>  //biblioteca para usar a função printf() e scanf()
#include<stdlib.h> //biblioteca para usar a função system()

main()
{  //ALGORITMO 
   int n1, n2, m;   // DECLARE N1, N2 e M NUMERICO
   printf("Informe 1o. numero: ");  // ESCREVA “Informe o 1º número:”
   scanf("%d",&n1); // LEIA N1
   printf("Informe 2o. numero: ");  // ESCREVA “Informe o 2º número:”
   scanf("%d",&n2); // LEIA N2
   m = n1 * n2; // M <- N1 * N2
   printf("Resultado = %d\n",m); // ESCREVA “Resultado = “, M
   system("PAUSE"); //Função para pausar o programa
}  //FIM_ALGORITMO 



 



