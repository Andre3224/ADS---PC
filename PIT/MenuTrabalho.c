#include<stdio.h>

main()
{
	int op, op1, op2, op3, op4;
	
	printf("\n1 - CADASTRO");
	printf("\n2 - RESERVA");
	printf("\n3 - LANCAMENTO");
	printf("\n4 - RELATORIOS");
	printf("\n5 - FINALIZAR");
	printf("\nOpcao desejada: ");
	scanf("%d",&op);
	
	while(op!=5)
	{
		
		switch(op)
		{
			case 1:
				printf("\n1 - QUARTO");
				printf("\n2 - HOSPEDE");
				printf("\n3 - SERVICOS");
				printf("\n4 - RETORNAR");
				printf("\nOpcao desejada: ");
				scanf("%d",&op1);
				
				while(op1!=4)
				{
					
					printf("\n1 - QUARTO");
					printf("\n2 - HOSPEDE");
					printf("\n3 - SERVICOS");
					printf("\n4 - RETORNAR");
					printf("\nOpcao desejada: ");
					scanf("%d",&op1);
				}
				break;
				
			case 2:
				printf("\n1 - INCLUIR");
				printf("\n2 - ALTERAR");
				printf("\n3 - EXCLUIR");
				printf("\n4 - RETORNAR");
				printf("\nOpcao desejada: ");
				scanf("%d",&op2);
				
				while(op2!=4)
				{
					
					printf("\n1 - INCLUIR");
					printf("\n2 - ALTERAR");
					printf("\n3 - EXCLUIR");
					printf("\n4 - RETORNAR");
					printf("\nOpcao desejada: ");
					scanf("%d",&op2);
				}
				break;
				
			case 3:
				printf("\n1 - INCLUIR");
				printf("\n2 - ALTERAR");
				printf("\n3 - EXCLUIR");
				printf("\n4 - RETORNAR");
				printf("\nOpcao desejada: ");
				scanf("%d",&op3);
				
				while(op3!=4)
				{
					
					printf("\n1 - INCLUIR");
					printf("\n2 - ALTERAR");
					printf("\n3 - EXCLUIR");
					printf("\n4 - RETORNAR");
					printf("\nOpcao desejada: ");
					scanf("%d",&op3);
				}
				break;
				
			case 4:
				printf("\n1 - QUARTOS OCUPADOS");
				printf("\n2 - QUARTOS LIBERADOS");
				printf("\n3 - HOSPEDES");
				printf("\n4 - SERVICOS");
				printf("\n5 - RETORNAR");
				printf("\nOpcao desejada: ");
				scanf("%d",&op4);
				
				while(op4!=5)
				{
					
					printf("\n1 - QUARTOS OCUPADOS");
					printf("\n2 - QUARTOS LIBERADOS");
					printf("\n3 - HOSPEDES");
					printf("\n4 - SERVICOS");
					printf("\n5 - RETORNAR");
					printf("\nOpcao desejada: ");
					scanf("%d",&op4);
				}
				break;
				
			default: printf("\n OPCAO INVALIDA! ");
		}
		
		printf("\n1 - CADASTRO");
		printf("\n2 - RESERVA");
		printf("\n3 - LANCAMENTO");
		printf("\n4 - RELATORIOS");
		printf("\n5 - FINALIZAR");
		printf("\nOpcao desejada: ");
		scanf("%d",&op);
		
	}
	
	
}
