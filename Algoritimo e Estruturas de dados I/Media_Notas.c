#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	float n1=0.0, n2=0.0, media=0.0;
	
	printf("Digite a nota 1:");
	scanf("%f", &n1);	
	
	if(n1<0.0 || n1>10){
		printf("Nota Inválida!");
		return;	
	}

	
	printf("Digite a nota 2:");
	scanf("%f", &n2);	
	if(n2<0.0 || n2>10){
		printf("Nota Inválida!");
		return ;
	}

	media = (n1+n2)/2;
	printf ("A sua média foi %.2f", media);
return 0;
}

