/*Construa um algoritmo que seja capaz de concluir qual dentre os animais seguintes foi escolhido, 
através de perguntas e respostas. Animais possíveis: 
leão, cavalo, homem, macaco, morcego, baleia, avestruz, pingüim, pato, águia, tartaruga, 
crocodilo e cobra.*/

#include <stdio.h> // printf e scanf
#include <ctype.h>

main(){  //Programa Principal { -> Inicio
	
	char x;

	printf("Eh mamifero? ");
	fflush(stdin); //limpa o buffer do teclado
	scanf("%c",&x);
	
	x = toupper(x); //torna os char em Maiusculo
	
	if (x == 'S'){
		printf("Eh quadrupede? ");	
		fflush(stdin); 
		scanf("%c",&x);
		x = toupper(x);
		if (x == 'S'){
			printf("Eh Carnivoro? ");	
			fflush(stdin); 
			scanf("%c",&x);		
			x = toupper(x);
			if ( x == 'S')
				printf("Leao");
			else{
				printf("Eh Herbivoro? ");	
				fflush(stdin); 
				scanf("%c",&x);	
				x = toupper(x);
				if (x == 'S')
					printf("Cavalo");
				else
					printf("Animal nao reconhecido");
			};
		}
		else{
			printf("Eh Bipede? ");	
			fflush(stdin); 
			scanf("%c",&x);		
			x = toupper(x);		
			if (x == 'S'){
				printf("Eh onivoro? ");	
				fflush(stdin); 
				scanf("%c",&x);		
				x = toupper(x);
				if (x == 'S')
					printf("Homem");
				else{
					printf("Eh frutifero? ");	
					fflush(stdin); 
					scanf("%c",&x);		
					x = toupper(x);
					if (x == 'S')
						printf("Macaco");
					else
						printf("Animal nao reconhecido");
			};	
			}else{
				printf("Eh Voador? ");	
				fflush(stdin); 
				scanf("%c",&x);		
				x = toupper(x);
				if(x=='S')
					printf("Morcego");
				else{
					printf("Eh Aquatico? ");	
					fflush(stdin); 
					scanf("%c",&x);		
					x = toupper(x);
					if (x == 'S')
						printf("Baleia");
					else
						printf("Animal Nao Reconhecido");	
				};
			}
		};
	}
	else
	{
		printf("Eh Ave? ");	
		fflush(stdin); 
		scanf("%c",&x);		
		x = toupper(x);	
		if (x == 'S'){
			printf("Eh NAO Voadora? ");	
			fflush(stdin); 
			scanf("%c",&x);		
			x = toupper(x);
			if(x == 'S'){
				printf("Eh Tropical? ");	
				fflush(stdin); 
				scanf("%c",&x);		
				x = toupper(x);
				if (x == 'S'){
					printf("Avestruz");
				}else{
					printf("Eh Polar? ");	
					fflush(stdin); 
					scanf("%c",&x);		
					x = toupper(x);
					if (x == 'S')
						printf("Pinguim");
					else
						printf("Animal Nao Reconhecido");
				};
	
			}else{
				printf("Eh Nadadora? ");	
				fflush(stdin); 
				scanf("%c",&x);		
				x = toupper(x);
				if (x == 'S')
					printf("Pato");
				else{
					printf("Eh de rapina? ");	
					fflush(stdin); 
					scanf("%c",&x);		
					x = toupper(x);
					if(x=='S')
						printf("Aguia");	
					else
						printf("Animal NAO reconhecido");
					
				};
			};
				
		}else{
			printf("Eh reptil? ");	
			fflush(stdin); 
			scanf("%c",&x);		
			x = toupper(x);	
			if(x=='S'){
				printf("Com CASCO? ");	
				fflush(stdin); 
				scanf("%c",&x);		
				x = toupper(x);
				if(x=='S')
					printf("Tartaruga");
				else{
					printf("Carnivoro? ");	
					fflush(stdin); 
					scanf("%c",&x);
					x = toupper(x);	
					if(x=='S')
						printf("Crocodilo");
					else{
						printf("Sem Patas? ");	
						fflush(stdin); 
						scanf("%c",&x);
						x = toupper(x);
						if(x == 'S')
							printf("Cobra");
						else
							printf("Animal NAO reconhecido");	
					};
						
				};
			}
			else
			printf("Animal NAO reconhecido");
		};
		
	};
}
