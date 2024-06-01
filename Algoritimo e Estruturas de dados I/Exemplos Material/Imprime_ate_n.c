#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, i=0;
	
printf("Digite o primeiro valor:");
scanf("%d",&n1);

printf("Digite o segundo valor:");
scanf("%d",&n2);

if (n1 < n2){
	for (n1; n1<=n2; n1++){
		printf("\nA lista até o primeiro é %d",n1);
	}
}


else if (n2 < n1){
	for (n2; n2<=n1; n2++){
		printf("\nA lista até o segundo é %d",n2);
	}
}

else {
	printf("Números iguais!");
}
	
	


	
    return 0;
}