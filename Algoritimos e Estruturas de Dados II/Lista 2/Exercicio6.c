#include <stdio.h> 
#include <locale.h>
#include <math.h>
// Autor: Eduardo de Souza de Oliveira
int verif (int n1, int n2);


int main() {
    setlocale(LC_ALL, "Portuguese");
   	int n1, n2, resu = 0;
   	
   	printf("Digite o primeiro número:");
   	scanf("%d",&n1);
   	
   	printf("Digite o segundo número:");
   	scanf("%d",&n2);
   	
   	resu = verif(n1,n2);
   	printf("O maior é: %d",resu);
   	
    return 0;
}

int verif(int n1, int n2){
	if (n1 > n2){
		return n1;
	}
	else {
		return n2;
	}
}
