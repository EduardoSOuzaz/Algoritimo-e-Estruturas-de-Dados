//Exercicio Prova 
int main(){
	int i=0, n=0, contador=0;
	printf("Digite o valor de n = ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		if(i%6 != 0){
			printf("%d ", i);
		}
		else {
			contador++;
		}
	}
	printf("\nTotal = %d", contador);
	return 0;
}
