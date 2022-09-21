/*
	André, RA: 10442222013
	Brayann
	Iuri
	Pedro Henrique
	Rafael Ribeiro, RA: 10442222194
	Yasmin
*/
#include<stdio.h>

main(){
	int op, op2, op3, op4;
	
	printf("\n1- Cadastro");
	printf("\n2- Reserva");
	printf("\n3- Lancamento");
	printf("\n4- Relatorio");
	printf("\n5- Finalizar");
	printf("\nEntre com uma opcao: ");
	scanf("%d",&op);
	
	while (op!=5){
		switch(op){
			case 1:
				printf("\n---Menu do Cadastro---");
				//Rafa
				break;
			case 2:
				printf("\n---Menu da Reserva---"); 
				printf("\n1 incluir");
				printf("\n2 alterar");
				printf("\n3 excluir");
				printf("\n4 retornar");
				printf("\nEntre com uma opcao: ");
				scanf("%d",op2);
				
				break;
			case 3:
				printf("\n---Menu do Lancamento---");
				//Brayann
				break;
			case 4:
				printf("\n---Menu do Relatorio---");
				//Yasmin
				break;
			default: printf("\nOpcao invalida");
			
			
			
		}
	printf("\n1- Cadastro");
	printf("\n2- Reserva");
	printf("\n3- Lancamento");
	printf("\n4- Relatorio");
	printf("\n5- Finalizar");
	printf("\nEntre com uma opcao: ");
	scanf("%d",&op);	
	}
	
}
