#include <stdio.h>

main(){
	
	
	int idd, cont, idds;
	
	cont = 0;
	idd = 0;
	idds = 0;
	while (cont < 10)
	{
		printf("Digite uma idade: ");
		scanf("%d",&idd);
		
		cont += 1;
		if (idd >= 18)
			idds += 1;
			
		
	}
	printf("Existem %i idades maiores que 18", idds);
	
}
