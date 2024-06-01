#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
  int i=1, n;
  
  printf("Digite um número para saber a sua lista:");
  scanf("%d",&n);
  
  while (i<=n){
		printf("\nLista: %d",i);
		i++;
  }
    return 0;
}


