#include <stdio.h>

main(){
	
	float Lab, AVsem, Exam, med;
	
	printf("Receba o valor da nota de Laboratorio: ");
	scanf("%f",&Lab);
	printf("Receba o valor da nota da Ava Semestral: ");
	scanf("%f",&AVsem);
	printf("Receba o valor da nota do Exame Final: ");
	scanf("%f",&Exam);
	
	med = ((Lab*2) + (AVsem*3) + (Exam*5))/10;
	
	printf("\nA media do aluno e: %2.2f", med);
	
	if(med > 8 && med <=10)
		printf("\nConceito A");
	else if(med > 7 && med <=8)
		printf("\nConceito B");
	else if(med > 6 && med <=7)
		printf("\nConceito C");
	else if(med > 5 && med <=6)
		printf("\nConceito D");
	else
		printf("\nConceito E");
	
}
