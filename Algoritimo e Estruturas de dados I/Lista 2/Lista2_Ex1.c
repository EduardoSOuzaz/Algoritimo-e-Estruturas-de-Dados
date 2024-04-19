#include <stdio.h>
#include <locale.h>
//Programa que verifica o tipo de triângulo e verifica se os mesmos formam um 
int main() {
	setlocale(LC_ALL, "Portuguese");
   int L1,L2, L3;
   
   printf("Digite o primeiro lado do triângulo:");
   scanf("%d",&L1);
   
   printf("Digite o segundo lado do triângulo:");
   scanf("%d",&L2);
   
   printf("Digite o terceiro lado do triângulo:");
   scanf("%d",&L3);
   
   if (L1 == L2 && L1 == L3){
		printf("\nTriângulo Equilátero.");
   }
   
   else if (L1 == L2 || L2 == L3 || L1 == L3){
		printf("\nTriângulo Isósceles.");
   }
   
   else {
		printf("\nTriângulo Escaleno.");
   }
   
   //Para retornar se formam um triângulo
   if (L1 + L2 > L3 || L2 + L3 > L1){
		printf("\nNão formam um triângulo");
   }
   
   else {
   	printf("\nNão formam um triângulo");
}
    return 0;
}


