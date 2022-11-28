/*
Conteo nuumerico - GIT
*/
#include<stdio.h>
int main(){
	int c, n, i;
	printf("Dame un numero para contar: ");
	scanf("%d", &n);
	if(n<=200){
		c=1;
		for(i=1; i<=n; i++){
			printf("%i ", i);
			if(c==10){
				printf("\n");
				c=0;
			}
			c++;
		}
	}
	else{
		printf("Numero no valido :(");
	}
	return 0;
}
