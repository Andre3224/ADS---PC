#include <stdio.h>
main()
{
	int num1, num2;
	
	printf("Entre com um numero: ");
	scanf("%i",&num1);
	printf("Entre com outro numero: ");
	scanf("%i",&num2);
	
	if(num1>num2)
		printf("O primeiro eh maior que o segundo!!");
	else if (num1 == num2)
		printf("O primeiro eh igual ao segundo!!");
	else
		printf("O segundo eh maior que o primeiro!!");
	
}
