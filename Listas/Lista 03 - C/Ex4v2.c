#include <stdio.h>
main()
{
	char sexo;
	sexo = ('H', 'M');
	float altura, peso;

	printf("Qual o seu sexo (homem = H ou mulher = M): ");
	scanf("%c", &sexo);
	
	if(sexo=='H' || sexo =='M')
	{
		printf("Qual a sua altura: ");
		scanf("%f", &altura);
	
		if (sexo =='H')
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
	else
	{
		printf("Sexo nao reconhecido!");
	};
}
