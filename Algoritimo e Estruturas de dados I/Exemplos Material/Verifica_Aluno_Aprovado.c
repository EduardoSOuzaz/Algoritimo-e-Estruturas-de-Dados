//Programa que recebe 2 notas e verifica se o aluno está aprovado

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	float n1, n2, media;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	
		
	media = (n1+n2)/2;
		
		
	printf("Media = %.1f", media);
	
	if(media>=6){
		printf(" - Aproved!");
		
	}
	else
	printf(" - Reproved");
	
return 0;
}


