#include <stdio.h>

main(){
	
	float Lab, AVsem, Exam, med;
	int x;
	
	printf("Receba o valor da nota de Laboratorio: ");
	scanf("%f",&Lab);
	printf("Receba o valor da nota da Ava Semestral: ");
	scanf("%f",&AVsem);
	printf("Receba o valor da nota do Exame Final: ");
	scanf("%f",&Exam);
	
	med = ((Lab*2) + (AVsem*3) + (Exam*5))/10;

	printf("\nA media do aluno e: %2.2f", med);
	

	switch (x){
		case (0):
			printf("Conceito A!");
		case (1):
			printf("Conceito B!");
		case (2):
			printf("Conceito C!");
		case (3):
			printf("Conceito D!");
		case (4):
			printf("Conceito E!");	
		
	}
	
	
}
