#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int i, j;
	float euler;
	long long int fatorial;
	
	printf("Número de Euler\n\n");
	printf("n\tEuler\n\n");
	
	for(i = 0; i <= 20; i++){
		fatorial = 1;
		for(j = 1; j <= i; j++){
			fatorial = fatorial * j;
		}
	
	euler = euler + 1.0 / fatorial;
	
	printf("%d\t%f\n", i, euler);
}	
	
}
