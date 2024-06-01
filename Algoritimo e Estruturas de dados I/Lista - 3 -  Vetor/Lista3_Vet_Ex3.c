#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float med = 0, vet[20], tot = 0;
	 int i = 0;
    
    for (i = 0; i<20; i++){
		printf("Digite as notas:");
		scanf("%f",&vet[i]);
    }
    
    for (i = 0; i<20; i++){
		tot += vet[i];
		med = tot / 20;
    }
    
    printf("\nMédia: %.1f",med);
    return 0;
}


