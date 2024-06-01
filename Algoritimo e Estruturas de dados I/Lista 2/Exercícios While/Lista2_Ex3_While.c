#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
  int i=1, soma=0;
  
  while (i <= 100){
		i++;
		if (i % 2 == 0){
			printf("\n\nPares: %d",i);
		soma += i;
		}  
	
}
	printf("\t Resultado soma dos pares %d",soma);
  
  

  
    return 0;
}


