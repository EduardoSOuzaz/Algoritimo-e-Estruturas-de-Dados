#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
int i = 1; 

for (i; i<=100; i++){
	if (i % 2 == 0 && i % 3 == 0 ){
		printf("\n");
	}
	else {
		printf("\t%d",i);
	}

}

    return 0;
}


