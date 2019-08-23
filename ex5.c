#include<stdio.h>

int main(){
	
	int i, n1, n2;
	
	srand(time(NULL));
	
	n1 = rand() % 100;
	n2 = rand() % 100;
	
	printf("%d %d\n", n1, n2);
	
	if(n1 > n2){
		for(i = n1 - 1; i > n2; i--){
			printf("%d, ", i);
		}
	}else{
		for(i = n1 + 1; i < n2; i++){
			printf("%d, ", i);
		}
	}
	
	printf("\b\b ");
}
