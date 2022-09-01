#include <stdio.h>
main()
{
	int num, rest;
	
	printf("Entre com um numero: ");
	scanf("%i",&num);
	rest = num%2;

	if(rest == 0)
		printf("Eh par com resto: %i", rest);
	else
		printf("Eh impar com resto: %i", rest);
}
