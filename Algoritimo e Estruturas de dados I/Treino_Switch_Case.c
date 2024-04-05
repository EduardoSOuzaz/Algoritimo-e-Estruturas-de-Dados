#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int mes;
	printf("Digite um número de 1 a 12 \n para saber o mês desejado \n mais a sua quantidade de dias:");
	scanf("%d",&mes);
	
	switch (mes){
		case 1 :
			printf("Janeiro\n"); 
			printf ("31 dias"); break;
			
			case 2 :
			printf("Fevereiro\n"); 
			printf ("28 dias"); break;
						
			case 3 :
			printf("Março\n "); 
			printf ("31 dias"); break;
						
			case 4 :
			printf("Abril\n"); 
			printf ("31 dias"); break;
								
			case 5 :
		    printf("Maio\n"); 
			printf ("31 dias\n"); 
			printf("Aniversario do nosso filho\n");
			break;
		
			case 6 :
			printf("Junho\n"); 
			printf ("30 dias"); break;
													
			case 7 :
		    printf("Julho\n"); 
			printf ("31 dias"); break;
														
			case 8 :
			printf("Agosto\n"); 
			printf ("31 dias"); break;
														
															case 9 :
														printf("Setembro\n"); 
														printf ("30 dias"); break;
														
															case 10 :
														printf("Outubro\n"); 
														printf ("31 dias"); break;
														
															case 11 :
														printf("Novembro\n"); 
														printf ("30 dias"); break;
														
															case 12 :
														printf("Dezembro\n"); 
														printf ("31 dias"); break;
														
														default:
															printf("Não é um mês :(");
	}

	return 0;
}


