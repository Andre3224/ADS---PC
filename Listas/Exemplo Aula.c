#include <stdio.h>
# define TF 5

main(){
	
	int vetor[TF], i;
	
	
	//leitura de um vetor
	for(i=0;i<TF;i++){
		printf("\nEntre com um numero: ");
		scanf("%d",&vetor[i]);
	}

	
	//imprimir um vetor
	for(i=0;i<TF;i++){
		printf("\n[%d]=%d",i,vetor[i]);
	}
}
