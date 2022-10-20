#include <stdio.h>
# define TF 12

main(){
	float Vetor[TF], maior=0, menor=9999 ;
	int i, maiorM, menorM;
	
	for(i=0;i<12;i++){
		printf("\nEntre a temperatura media do mes: ");
		scanf("%f",&Vetor[i]);	
	}
	for(i=0;i<12;i++){
		if(Vetor[i]>maior){
			maior=Vetor[i];
			maiorM = i+1;
		}
		if(Vetor[i]<menor){
			menor=Vetor[i];
			menorM=i+1;
		}
	}	
	
	printf("\nA menor temperatura e do ano eh: %.1f",menor);
	printf("\nNo mes: %d",menorM);
	printf("\nA maior temperatura e do ano eh: %.1f",maior);
	printf("\nNo mes: %d",maiorM);
}
