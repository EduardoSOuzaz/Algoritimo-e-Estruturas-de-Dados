#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
   int N1, N2 , N3;
   
   printf("Digite o primeiro número:");
   scanf("%d",&N1);
         
   printf("Digite o segundo número:");
   scanf("%d",&N2);
        
   printf("Digite o terceiro número:");
   scanf("%d",&N3);
   
   if (N1 > N2 && N1 > N3){
		printf("O %d é o maior \nsendo ele o primeiro número digitado",N1);
   }
   
  else if (N2 > N1 && N2 > N3){
		printf("O %d é o maior \nsendo ele o segundo número digitado",N2);
   }
   else {
		printf("O %d é o maior \nsendo ele o ultimo número digitado",N3);
   }
    return 0;
}


