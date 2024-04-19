#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	int i = 1, n, par=0;
	
	for (i; i<=100; i++){
		if (i % 2 == 0){
			par += i;
			
		}
	} 
		printf("\nSoma pares: %d",par);	
    return 0;
}


