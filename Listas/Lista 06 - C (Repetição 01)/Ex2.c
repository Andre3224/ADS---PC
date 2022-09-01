#include <stdio.h>

main(){

	int nums, num, par, impar, rest;
	
	nums = 1;
	par = 0;
	impar = 0;
	while (nums <= 132)
	{
		printf("Entre com um numero: ");
		scanf("%d",&num);
	
		nums += 1;
		rest = num%2;
		
		if(rest == 0)
			par += 1;
		else
			impar += 1;
	
	
	}
	
	printf("Existem %d numeros pares.",par );
	printf("\nExistem %d numeros impares.",par );


}
