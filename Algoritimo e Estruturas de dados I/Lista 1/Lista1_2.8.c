#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Math.h>
int main() {
	 setlocale(LC_ALL, "Portuguese");
	  float a, b, med;
	  
	  printf("Nota 1:");
	  scanf("%f",&a);
	  
	printf("Nota 2:");
	  scanf("%f",&b);
	  
	  
	  if (a && b <= 10){
	  
	  med = (a + b) / 2;
	  
	  printf("A média é: %.2f",med);
	  
}


else if (a || b  > 10){
	printf("Notas Inválidas.\n Uma nota valida é um número de 1 a 10");
	
}
	
    return 0;
}
