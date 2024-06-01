#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Math.h>
int main() {
	 setlocale(LC_ALL, "Portuguese");
	  float Sal, grat, aux, auxx, tot;
	  
	  printf("Digite o sálario do funcionário:");
	  scanf("%f", &Sal);
	  
	  auxx = Sal;
	  aux = Sal * 0.05;
	  tot = aux + auxx;
	  
	  
	  printf("O sálario do funcionário é: %.2f\n",auxx);
	  printf("O sálario com a gratificação de 5 por cento foi: %.2f\n",aux);
 	 printf("Sálario somado a gratificação: %.2f",tot);
	
    return 0;
}
