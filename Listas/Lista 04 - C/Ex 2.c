/*2:-) Fa�a um algoritmo que receba dois n�meros, verifique se estes s�o pares ou �mpares e exiba a mensagem sobre a situa��o de cada um. 
Al�m de exibir o resultado das seguintes opera��es, com base na tabela abaixo:*/

#include <stdio.h>

main(){

	int x, y, z,res, res2, soma, sub, div, mult;
	
	
	printf("Entre com um numero: ");
	scanf("%d",&x);
	printf("Entre com um numero: ");
	scanf("%d",&y);

	res = x%2;
	res2 = y%2;
	
	soma = x + y;
	sub = x-y;
	div = x/y;
	mult = x*y;
	
	if(res == 0 && res2 ==0)
		printf("A soma e: %d",soma);
		
	else if (res == 1 && res2 == 1)
		printf("A subtracao e: %d",sub);
	
	else if (res == 0 && res2 == 1)
		printf("A multiplicacao eh: %d",mult);
		
	else if (res == 1 && res2 == 0)
		printf("A divisao eh: ",div);

}

