#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
   int n, fb;
   
   printf("Digite um número para saber a série em Fibonacci:");
   scanf("%d",&n);
   
   fb = (1/sqrt(5))*(pow((1+sqrt(5))/2,n)) - pow((1-sqrt(5))/2,n);
   
   printf("O valor correspondente a série em fibonacci %d",fb);
    return 0;
}


