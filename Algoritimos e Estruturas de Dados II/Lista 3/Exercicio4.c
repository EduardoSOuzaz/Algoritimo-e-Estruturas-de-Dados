#include <stdio.h> 
#include <locale.h>
// Eduardo de Souza de Oliveira 
float calcMed(float n1, float n2, float n3, float n4);

int main() {
    setlocale(LC_ALL, "Portuguese");
    float n1,n2,n3,n4;
    
    printf("Digite a Primeira Nota: ");
    scanf("%f",&n1);
   
   	printf("Digite a Segunda Nota: ");
    scanf("%f",&n2);
	
	printf("Digite a Terceira Nota: ");
    scanf("%f",&n3);
	
	printf("Digite a Quarta Nota: ");
    scanf("%f",&n4); 
    calcMed(n1,n2,n3,n4);
    return 0;
}

float calcMed(float n1, float n2, float n3, float n4){
	float med = 0;
	med = (n1 + n2 + n3 + n4) / 4;
	printf("\nMédia das notas do aluno: %.2f",med);
	if (med >= 7){
		printf("\nAluno Aprovado!");
	}
	else {
		printf("\nAluno Reprovado!");
	}
}
