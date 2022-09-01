#include <stdio.h>
main()
{
	float sal, reaj, salfi;
	
	printf("Entre com o seu salario: ");
	scanf("%f",&sal);
	
	if(sal<=800)
	{
		reaj = sal*0.5;
		salfi = sal + reaj;
		printf("O salario final eh de: %5.2f", salfi);
	}
	else
	{
		reaj = sal*0.3;
		salfi = sal + reaj;
		printf("O salario final eh de: %5.2f", salfi);
		
	};
}
