#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
  int i=1;
  
  while (i<=10){
		printf("\nLista 1 a 10: %d",i);
		i++;
  }
    return 0;
}


