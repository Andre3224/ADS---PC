#include <stdio.h>
main()
{
	float area, base, altura;
	
	printf("Entre com a base do triangulo: ");
	scanf("%f",&base);
	printf("Entre com a altura: ");
	scanf("%f",&altura);
	area = (base*altura)/2;
	
	printf("A area e: %4.2f", area);
}
