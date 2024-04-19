#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
int i = 1, n, med=0, armz;

for (i; i<=10; i++ ){
	printf("Digite 10 números:");
	scanf("%d",&n);
	
	med += n;
	armz = med / 10;

}
printf("\n\nMédia %d",armz);

    return 0;
}


