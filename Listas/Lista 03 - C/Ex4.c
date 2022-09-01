#include <stdio.h>
main()
{
	
	float altura, peso, sexo;
	
		
	printf("Qual o seu sexo (homem = 1 ou mulher = 0): ");
	scanf("%f", &sexo);
	
	printf("Qual a sua altura: ");
	scanf("%f", &altura);
	
	if (sexo == 1)
	{
		peso = (72.7 * altura) - 58;
		printf("O seu peso ideal eh: %4.2f", peso);
		
	}
	else
	{
		peso = (62.1 * altura) - 44.7;
		printf("O seu peso ideal eh: %4.2f", peso);
	};
}
