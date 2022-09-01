//Faça um programa que leia a idade de uma pessoa e diga se ela pode votar.

#include <stdio.h>
main()
{
	int idd;
	
	printf("Entre com a sua idade: ");
	scanf("%i",&idd);
	
	if(idd>=16)
		printf("Voce pode votar!");
	else
		printf("Voce NAO pode votar!");
	
	
	
}
