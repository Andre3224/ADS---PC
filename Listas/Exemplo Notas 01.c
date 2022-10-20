#include <stdio.h>
# define TF 5

main(){
	int i,cont=0;
	float VetNotas[TF], soma=0, med=0;
	
	//Entrada de notas no vetor
	for(i=0;i<TF;i++){
		printf("\nEntre com as notas: ");
		scanf("%f",&VetNotas[i]);
		soma = soma + VetNotas[i];
	}
	med = soma/TF;
	printf("\nA media eh de: %.2f \n", med);
	
	//Contador de notas acima da media
	for(i=0;i<TF;i++){
		if(VetNotas[i]>med){
			cont++;
		}
	}
	//Imprimir o vetor
	for(i=0;i<TF;i++){
		printf("| %.2f ",VetNotas[i]);
	}
	printf("\nO total de alunos acima da media foi de: %d",cont);
}
