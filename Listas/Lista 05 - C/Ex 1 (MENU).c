#include <stdio.h>
#include <math.h>

main(){
	
	int op,n11;
	float resp, n1, n2;
	
	
	printf("===Bem vindo === \nEscolha uma opcao: \n[1] Soma \n[2] Media \n[3] Raiz \n[4] Potencia \n[5] Finalizar \nOpcao: ");
	scanf("%d",&op);

	switch(op){
		case 1:
			printf("Entre com o num 1: ");
			scanf("%f",&n1);
			printf("Entre com o num 2: ");
			scanf("%f",&n2);
			resp = n1+n2;
			printf("A soma eh: %0.2f", resp);
			break;
		case 2:
			printf("Entre com o num 1: ");
			scanf("%f",&n1);
			printf("Entre com o num 2: ");
			scanf("%f",&n2);
			resp = (n1+n2)/2;
			printf("A media entre N1 e N2 eh: %0.2f", resp);
			break;
		case 3:
			printf("Entre com o num 1: ");
			scanf("%d",&n11);
			resp = sqrt(n11); // TEM QUE INCLUIR A BIBLIOTECA math.h
			printf("A raiz do N1 eh: %0.2f", resp);
			break;
		case 4:
			printf("Entre com o num 1: ");
			scanf("%f",&n1);
			printf("Entre com o num 2: ");
			scanf("%f",&n2);
			resp = pow(n1, n2);
			printf("A potencia de n1 elevado a n2 eh: %0.2f", resp);
			break;
		case 5:
			printf("finalizando");
			printf("\n===FIM===");
			break;
		default:
			printf("Erro encontrado");
				
		
		
	};



}

