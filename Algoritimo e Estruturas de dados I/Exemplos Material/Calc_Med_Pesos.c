//Programa que recebe 3 notas e mostra e imprime a média
// Nota 1 tem peso 4  
//Nota 2 peso 4  
//Projeto peso 2
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	float n1, n2, projeto, media;
	
	printf("Digite a nota 1 nota 2 e nota proj:");
	scanf("%f %f %f", &n1, &n2, &projeto);
	
		// media = ((n1*4)+(n2*4)+(projeto*2))/10; Por números inteiros
		
		media = ((n1*0.4)+(n2*0.4)+(projeto*0.2)); //Pelos decimais sem fazer a divisão 
		
		
		printf("Media = %.2f", media)
	


	
return 0;
}

