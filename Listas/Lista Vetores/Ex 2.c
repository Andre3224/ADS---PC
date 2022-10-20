#include <stdio.h>
# define TF 6

main(){
	int Vetor[TF],i, ContPar=0, ContImpar=0, par;
	
	for(i=0;i<TF;i++){
		printf("Entre com os numeros do vetor: ");
		scanf("%d",&Vetor[i]);	
	}
	for(i=0;i<TF;i++){
		par= (Vetor[i])%2;
		if(par==0){
			ContPar ++;
			
		}else{
			ContImpar ++;	
		}
	}
	printf("\nA quantidade de num pares nom vetor eh: %d", ContPar);
	printf("\nA quantidade de num impares nom vetor eh: %d", ContImpar);
}
