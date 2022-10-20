#include <stdio.h>
# define TF 2

main(){
	int Vetor1[TF], Vetor2[TF], VetorR[TF*2], i,j;
	
	for(i=0;i<TF;i++){
		printf("Entre com os numeros do vetor 1: ");
		scanf("%d",&Vetor1[i]);
		
		printf("Entre com os numeros do vetor 2: ");
		scanf("%d",&Vetor2[i]);
	}
	
	j=0;
	for(i=0;i<TF;i++){
		VetorR[j]=Vetor1[i];
		j++;
		VetorR[j]=Vetor2[i];
		j++;
	}
	
	for(i=0;i<TF;i++){
		printf("| %d ", Vetor1[i]);
	}
	printf("\n----------------\n");
	for(i=0;i<TF;i++){
		printf("| %d ", Vetor2[i]);
	}
	printf("\n----------------\n");
	for(i=0;i<(TF*2);i++){
		printf("| %d ", VetorR[i]);
	}
	
}
