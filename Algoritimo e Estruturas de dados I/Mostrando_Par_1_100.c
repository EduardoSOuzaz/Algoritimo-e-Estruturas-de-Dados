#include <stdio.h>
int main(){
	int i=0;
	
	for (i=1; i<=100; i++){
		if(i%2 == 0 && i != 100) {
		
			printf("%d -", i);
		}
		
		else if (i == 100) {
			printf("%d",i);
			
		}
		
		}
	
	return 0;
}