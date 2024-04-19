#include <stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");

int fat, n;
{
	printf("Digite o fatorial que desja saber:");
  scanf("%d", &n) ;

  for(fat = 1; n > 1; n = n - 1)
  {
      fat = fat * n;
  }

  printf("\nO fatorial é: %d",fat);
}
  return 0;
}


