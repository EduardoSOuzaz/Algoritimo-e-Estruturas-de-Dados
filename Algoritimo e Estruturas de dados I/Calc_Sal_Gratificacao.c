#include <stdio.h> 
int main() { 
float salario,s1,s2,final; 
printf("Digite o salario: ");
 scanf("%f",&salario); 
s1=(salario*0.07)/100; 
s2=(salario*0.05)/100; 
final=s2-s1; 
printf("O salario com desconto: %f",final); 

return 0; 
}

