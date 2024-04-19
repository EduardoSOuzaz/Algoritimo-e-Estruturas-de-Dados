#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	int n, num = 40;
	
	printf("tente acertar um número em um intervalo de 1 a 50:");
	scanf("%d",&n);
 while (1){	
	printf("tente acertar um número em um intervalo de 1 a 50:");
	scanf("%d",&n);
	if (n == 40){
		printf("Acertou! \n Parabéns");
		return;
	}
 }

  
    return 0;
}


