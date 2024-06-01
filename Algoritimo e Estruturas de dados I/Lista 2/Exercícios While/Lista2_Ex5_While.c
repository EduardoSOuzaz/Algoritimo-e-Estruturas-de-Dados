#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	int n, i=1,med=0,result;
	
	
while (i<=5){
		printf("Digite 5 números para saber a média:");
		scanf("%d",&n);
		i++;
		med += n;
	result = med / 5;	
	}
	
	printf("A média dos números é de %d",result);
 

  
    return 0;
}


