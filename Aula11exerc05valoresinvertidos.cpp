#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	system("color 8E");
	int a,b,aux;
	printf ("Informe o 1o.número: ");
	scanf ("%d",&a);
	printf ("Informe o 2o.número: ");
	scanf ("%d",&b);
	aux=a;
	a=b;
	b=aux;
	printf ("valor do 1o.número:%d\n", a);
	printf ("valor do 2o.número:%d\n", b);
	system ("Pause");
}

