#include <stdio.h>

main(){

	int AnCont, AnAT, IDD, AnCas, DP;
	float SalF, SalB;

	printf("Entre com o Salario base: ");
	scanf("%f",&SalB);
	printf("Entre com ano de CONTRATACAO: ");
	scanf("%d",&AnCont);
	printf("Entre com ano Atual: ");
	scanf("%d",&AnAT);
	printf("Entre com sua idade: ");
	scanf("%d",&IDD);
	printf("Entre com a quantidade de dependentes: ");
	scanf("%d",&DP);
	
	AnCas = AnAT - AnCont;
	
	if (IDD >= 25){  //If e Else da IDADE
		SalF = SalB + ((IDD - 25)*0.01*SalB);
		// Calcular o acresc por Dependente 
		SalF = SalF + ((0.05*SalF)*DP);
		// Calcular o Tempo de Casa
		SalF = SalF + ((0.03*SalF)*AnCas);
		printf("O salario final eh: %.2f", SalF);
	}else{
		SalF = SalB + ((0.05*SalB)*DP);
		SalF = SalF + ((0.03*SalF)*AnCas);
		printf("O salario final eh: %.2f", SalF);
	};

}
