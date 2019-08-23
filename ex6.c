#include<stdio.h>

int main(){
	
	int n, u, d, c, m;
	
	srand(time(NULL));
	
	n = 1000 + rand() % 8999;
	
	printf("%d\n", n);
	
	m = n / 1000;
	c = (n - (m * 1000)) / 100;
	d = (n - (m * 1000)  - (c * 100)) / 10;
	u = (n - (m * 1000)) - (c * 100) - (d * 10);
	
	printf("Unidade: %d\nDezena: %d\nCentena: %d\nMilhar: %d", u, d*10, c*100, m*1000);
	
}
