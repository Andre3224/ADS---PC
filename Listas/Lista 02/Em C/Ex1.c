#include <stdio.h>
main()
{
	float nota1, nota2, med;
	
	printf("Entre com a nota 1: ");
	scanf("%f",&nota1);
	printf("Entre com a nota 2: ");
	scanf("%f",&nota2);
	
	med = (nota1+nota2)/2;
	
	printf("A media e: %4.2f", med);
	
	if(med>=6)
		printf("\nAprovado!");
	else
		printf("\nReprovado!");
}
