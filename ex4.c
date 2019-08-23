#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i, j, n, somamais, somamenos;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &n);

	somamais = n + 10;
	somamenos = n - 10;
	
	for(i = somamenos; i <= n; i++){
		if(i % 2 != 0){
			printf("%d ", i);
		}
		if(i == n){
			for(j = n; j <= somamais; j++){
				if(j % 2 == 0){
					printf("%d ", j);
				}
			}
		}
	}
		
		
}
