/*Uma empresa possui algumas categorias de funcionários descritas abaixo. 
Faça um algoritmo que receba os códigos correspondente ao cargo de seus funcionários e exiba, o seu cargo, 
o percentual de aumento ao qual este funcionário tem direito seguindo a tabela abaixo, e também, o salário reajustado:*/

#include <stdio.h>

int main(){
	
	int x, codigo;
	float sal, salf, sala;
	x = 1;
	while (x == 1){
		
		printf("Entre com o CODIGO de funcionario: ");
		scanf("%d",&codigo);
		printf("Entre com o Salario do funcionario: ");
		scanf("%f",&sal);
		
		if (codigo == 1){
			printf("\nEscrituario");
			printf("\nA porcentagem de aumento eh de: 50%");
			sala = sal*0.5;
			salf = sal + sala;
			printf("O salario reajustado eh: %.2f", salf);
					
		}else if (codigo == 2){
			printf("\nSecretario");
			printf("\nA porcentagem de aumento eh de: 35%");
			sala = sal*0.35;
			salf = sal + sala;
			printf("O salario reajustado eh: %.2f", salf);
			
		}else if (codigo == 3){
			printf("\nCaixa");
			printf("\nA porcentagem de aumento eh de: 20%");
			sala = sal*0.2;
			salf = sal + sala;
			printf("O salario reajustado eh: %.2f", salf);
			
		}else if (codigo == 4){
			printf("\nGerente");
			printf("\nA porcentagem de aumento eh de: 10%");
			sala = sal*0.1;
			salf = sal + sala;
			printf("O salario reajustado eh: %.2f", salf);
			
		}else if (codigo == 5){
			printf("\nDiretor");
			printf("\nA porcentagem de aumento eh de: 0%");
			sala = sal;
			salf = sal + sala;
			printf("O salario reajustado eh: %.2f", salf);
			
		}else{
			printf("Opccao invalida!");
		}
		
		
		
		printf("\nDeseja continuar? 0 - Nao e 1 - Sim: ");
		scanf("%d",&x);
	}
	
	
	
	
}
