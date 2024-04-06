#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	float salario=0.0, valPrest=0.0;
	
	printf("Digite o salário:");
	scanf("%f", &salario);
	
	printf("Digite o valor da prestação do emprestimo::");
	scanf("%f", &valPrest);
	
	if(valPrest > salario*0.2)
		printf("\nEmprestimo não concedido!");
		
		else 
		printf("Emprestimo Concedido!");
	
	
	return 0;
}

