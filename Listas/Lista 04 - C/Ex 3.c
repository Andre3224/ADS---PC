/*Elabore um algoritmo que calcule o que deve ser pago por um curso, considerando o preço normal de venda e a escolha da condição de pagamento. 
Utilize os códigos da tabela a seguir para informar qual a condição de pagamento escolhida pelo Usuário e efetue o cálculo adequado.
Depois de executado o cálculo, deve-se informar ao Usuário o valor de venda, o valor do desconto ou juros, e o valor total a ser pago.*/

#include <stdio.h>

main(){
	float preco, desconto, precof;
	int c;
	
	printf("Digite o valor do curso: ");
	scanf("%f",&preco);

	
	printf("\nEscolha uma opcao: 0- Cancelar; 1- A vista; 2- A vista no Credito, 3- Parcelado 2 vezes (sem juros), 4- Parcelado 3 vezes (com juros 10%): ");
	scanf("%d",&c);
	
	
	
	switch (c){
		case 0:{
			printf("Cancelar...");
			break;
		}
		
		case 1:{
			desconto = 0.1*preco;
			precof = preco - desconto;
			printf("O preço final eh: %0.2f", precof);
			break;
			}
			
		case 2:{
			desconto = 0.05*preco;
			precof = preco - desconto;
			printf("O preço final eh: %0.2f", precof);
			break;
			}
			
		case 3:{
			precof = preco/2;
			printf("O preço de cada parcela eh: %0.2f", precof);
			break;
			}
		case 4:{
			desconto = preco * 0.1;
			precof = ((desconto+preco)/3);
			printf("O preço de cada parcela eh: %0.2f", precof);
			break;
			}
	}
		
	
	
}
