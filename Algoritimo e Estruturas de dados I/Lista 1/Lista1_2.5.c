#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Math.h>
int main() {
	 setlocale(LC_ALL, "Portuguese");
	  int n1;
	  
	  printf("Digite o número que deseja saber se é PAR ou ÍMPAR:");
	  scanf("%d",&n1);
	  
	  if (n1 % 2 == 0){
	  	
	  	printf("Número PAR: %d",n1);
	  }
	  
	  else  {
	  	printf("Número ÍMPAR: %d",n1);
	  }
	  

	
	
    return 0;
}
