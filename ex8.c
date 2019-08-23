#include<stdio.h>

int main(){
	
	int i, j, k, l, n;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		for(j = 0; j <= i - 1; j++){
			printf("%d ", i);
		}
		
		if(i == n){
			printf("\n");
			for(k = n - 1; k >= 1; k--){
				for(l = k - 1; l >= 0; l--){
					printf("%d ", k);
				}
				printf("\n");
			}
		}	

	printf("\n");
	}
}
	
	

