// Faça um programa que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que C.
#include <stdio.h>
main()
{
	float A, B, C, soma;
	
	printf("Entre com o valor A: ");
	scanf("%f",&A);	
	printf("Entre com o valor B: ");
	scanf("%f",&B);
	printf("Entre com o valor C: ");
	scanf("%f",&C);	
	
	soma = A+B;
	printf("soma");
	if(soma<C)
		printf("A soma eh menor que C");
	else
		printf("A soma nao eh menor que C");
		
}
