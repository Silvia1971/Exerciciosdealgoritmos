#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	system("color 1E");
	float sal_atual, novo_sal;
	printf ("Informe o salário atual: ");
	scanf ("%f",&sal_atual);
	if (sal_atual<0)
		printf ("Salário Inválido\n ");
	else
	{
		if (sal_atual>500)
			novo_sal = sal_atual*1.10;
		else
			novo_sal = sal_atual*1.20;
		printf ("Salário novo = %.2f\n ",novo_sal);
	}
	system ("Pause");
}

