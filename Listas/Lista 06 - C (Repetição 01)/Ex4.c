/*Faça um algoritmo que receba a idade e a altura de várias pessoas. Calcule e exiba a média das alturas das pessoas com mais de 50 anos. 
Para encerrar a entrada de dados, digite uma idade negativa ou igual a zero. */

#include <stdio.h>

main(){
	
	int idd, x;
	float altura, altura1, pessoas50;
	
	idd = 1;
	x = 0;
	while (idd > 0){
	
		printf("Entre com a idade: ");
		scanf("%d",&idd);
		printf("Entre com a altura: ");
		scanf("%f",&altura);
	
		if (idd >= 50){
			altura1 += altura;
			x += 1;
			pessoas50 = altura1 / x;
			
		}
	}
	printf("A media das idade eh: %.2f",pessoas50);
	
}
