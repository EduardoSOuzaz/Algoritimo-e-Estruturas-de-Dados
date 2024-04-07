#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Math.h>
int main() {
	 setlocale(LC_ALL, "Portuguese");
	  float valtot, totdesc, valparc, comiV, comiP;

  
    printf("Digite o valor total da compra: ");
    scanf("%f", &valtot);

    
    totdesc = valtot * 0.90;

  
    valparc = valtot * 0.03;

   
    comiV = totdesc * 0.05;

    
    comiP = valtot * 0.05;

    
    printf("1.9.1 Total a pagar com desconto de 10%%: %.2f\n", totdesc);
    printf("1.9.2 Valor de cada parcela (parcelamento de 3%% sem juros): %.2f\n", valparc);
    printf("1.9.3 Comissao do vendedor (venda a vista): %.2f\n", comiV);
    printf("1.9.4 Comissao do vendedor (venda parcelada): %.2f\n", comiP);

    return 0;
}
