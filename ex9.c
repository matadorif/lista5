#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int i, n, fatorial = 1;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &n);
	
	for(i = n; i >= 1; i--){
		fatorial = fatorial * i;
		printf("%d * ", i);
	}
	printf("\b\b ");
	
	printf("= %d", fatorial);
}
