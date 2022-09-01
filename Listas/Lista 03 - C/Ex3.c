//Faça um programa que leia dois valores inteiros. Se os valores forem iguais deverá se somar os dois, 
//caso contrário multiplique um valor pelo outro. 
//Ao final de qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela.
#include <stdio.h>
main()
{
	int num1, num2, C;
	
	printf("Entre com um numero: ");
	scanf("%i",&num1);
	printf("Entre com outro numero: ");
	scanf("%i",&num2);
	
	if (num1 == num2)
		{
			C = num1+num2;
			printf("O valor de C eh: %i", C);
		}
	
	else
		{
			C = num1*num2;
			printf("O valor de C eh: %i", C);
		};
}


