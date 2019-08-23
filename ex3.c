#include<stdio.h>

int main(){
	
	int i, n;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++){
		printf("%d, ", i);
	}
	
	printf("\b\b ");
}
