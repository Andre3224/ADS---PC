//Fa�a um programa que leia dois valores inteiros. Se os valores forem iguais dever� se somar os dois, 
//caso contr�rio multiplique um valor pelo outro. 
//Ao final de qualquer um dos c�lculos deve-se atribuir o resultado para uma vari�vel C e mostrar seu conte�do na tela.
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


