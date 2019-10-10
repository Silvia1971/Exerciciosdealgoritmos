#include<stdio.h>
#include<stdlib.h>

main ()
{
	float n1,n2,m;
	printf ("Informe a 1a.nota: ");
	scanf ("%f",&n1);
	printf ("Informe a 2a.nota: ");
	scanf ("%f",&n2);
	if (n1>10 || n1<0 || n2>10 || n2<0)
		printf ("Notas invalidas\n ");
	else
	{
		m=(n1+n2)/2;
		printf("Media=%.1f\n ",m);
		if (m>=6)
			printf("Aprovado\n ");
		else
			printf("Reprovado\n ");
		}
	system ("Pause");		
}
