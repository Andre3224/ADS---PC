#include <stdio.h>
# define TF 4 //vetor da quantidade de vendedores 

main(){
	int VetVendas[TF], i;
	float VetPecas[TF], soma=0, totalVend;
	
	for(i=0;i<TF;i++){
		printf("\nEntre com a quantidade de vendas do vendedor: ");
		scanf("%d",&VetVendas[i]);
		printf("\nEntre com o preco da peça vendida: ");
		scanf("%f",&VetPecas[i]);
	}
	for(i=0;i<TF;i++){
		soma = soma + (VetPecas[i]*VetVendas[i]);
	}
	for(i=0;i<TF;i++){
		totalVend = (VetPecas[i]*VetVendas[i]);
		printf("\nVendedor[%d] = %.2f",i+1, totalVend);
	}
	printf("\nO total das vendas geral eh: %.2f", soma); //Total de vendas geral
}
