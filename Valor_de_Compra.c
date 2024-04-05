#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float valTot=0.0, parcela3=0.0, desc10=0.0, comValTotParc=0.0, comValDesc10=0.0;
	
	printf("Digite o valor total da compra:");
	
	scanf("%f", &valTot);
	
	printf("Valor total da sua compra: R$ %.2f \n", valTot);
	
	parcela3=(valTot/3); 
	desc10=(valTot*0.9); 
	comValTotParc=valTot*0.05; 
	comValDesc10=valTot*0.9*0.05;
	
	printf("1 - O valor total com desconto de 10 porcento  R$ %.2f \n ", 	desc10);
	printf("2 - O valor de cada parcela em 3x  R$ %.2f \n", parcela3);
	printf("3 - Valor que o vendedor recebe no caso de pagamento a vista  R$ %.2f \n", comValDesc10);
	printf("4 - Comissão do vendedor recebe no caso de pagamento parcelado  R$ %.2f \n", comValTotParc);	
	return 0;
}

