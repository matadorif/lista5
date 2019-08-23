#include<stdio.h>

int main(){
	
	srand(time(NULL));
	
	int i, n;
	float p1, p2, p3, p4, p5, p6, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
	
	for(i = 0; i < 1000; i++){
		n = 1 + rand() % 6;
		
		if(n == 1){
			f1++;
		}
		
		else if(n == 2){
			f2++;
		}
		
		else if(n == 3){
			f3++;
		}
		
		else if(n == 4){
			f4++;
		}
		
		else if(n == 5){
			f5++;
		}
		
		else if(n == 6){
			f6++;
		}
	}
	
	p1 = (f1 / 1000) * 100;
	p2 = (f2 / 1000) * 100;
	p3 = (f3 / 1000) * 100;
	p4 = (f4 / 1000) * 100;
	p5 = (f5 / 1000) * 100;
	p6 = (f6 / 1000) * 100;
	
	printf("Face 1: %.2f\nFace 2: %.2f\nFace 3: %.2f\nFace 4: %.2f\nFace 5: %.2f\nFace 6: %.2f", p1, p2, p3, p4, p5, p6);
	
	
}
