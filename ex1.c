#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	srand(time(NULL));
	
	int i, op, n1, n2, resultado, acertos = 0, erros = 0, pergunta = 1;
	
	printf("* * * * * * * * * * * *\n");
	printf("* OPERAÇÕES DINÂMICAS *\n");
	printf("* * * * * * * * * * * * \n\n\n");
	
	
	while(erros < 3){
		
		op = rand() % 4;
		n1 = rand() % 10;
		n2 = rand() % 10;
		
		if(op == 0){
			printf("Pergunta %d:\n%d + %d = ", pergunta, n1, n2);
			scanf("%d", &resultado);
			
			if(resultado == n1 + n2){
				printf("\nVocê acertou! Parabéns!\n");
				acertos++;
				pergunta++;
				printf("\t\t\t\t\t\tAcertos: %d", acertos);
				printf("\t\t\tErros: %d\n", erros);
			}else{
				printf("\nVocê errou!\n");
				erros++;
				pergunta++;
				printf("\t\t\t\t\t\tAcertos: %d", acertos);
				printf("\t\t\tErros: %d\n", erros);
			}
		}
		
		else if(op == 1){
			printf("Pergunta %d:\n%d - %d = ", pergunta, n1, n2);
			scanf("%d", &resultado);
			
			if(resultado == n1 - n2){
				printf("\nVocê acertou! Parabéns!\n");
				acertos++;
				pergunta++;
				printf("\t\t\t\t\t\tAcertos: %d", acertos);
				printf("\t\t\tErros: %d\n", erros);
			}else{
				printf("\nVocê errou!\n");
				erros++;
				pergunta++;
				printf("\t\t\t\t\t\tAcertos: %d", acertos);
				printf("\t\t\tErros: %d\n", erros);
			}
		}
		
		else if(op == 2){
			printf("Pergunta %d:\n%d x %d = ", pergunta, n1, n2);
			scanf("%d", &resultado);
			
			if(resultado == n1 * n2){
				printf("\nVocê acertou! Parabéns!\n");
				acertos++;
				pergunta++;
				printf("\t\t\t\t\t\tAcertos: %d", acertos);
				printf("\t\t\tErros: %d\n", erros);
			}else{
				printf("\nVocê errou!\n");
				erros++;
				pergunta++;
				printf("\t\t\t\t\t\tAcertos: %d", acertos);
				printf("\t\t\tErros: %d\n", erros);
			}
		}
		
		else if(op == 3){
			printf("Pergunta %d:\n%d / %d = ", pergunta, n1, n2);
			scanf("%d", &resultado);
			
			if(resultado == n1 / n2){
				printf("\nVocê acertou! Parabéns!\n");
				acertos++;
				pergunta++;
				printf("\t\t\t\t\t\tAcertos: %d", acertos);
				printf("\t\t\tErros: %d\n", erros);
			}else{
				printf("\nVocê errou!\n");
				erros++;
				pergunta++;
				printf("\t\t\t\t\t\tAcertos: %d", acertos);
				printf("\t\t\tErros: %d\n", erros);
			}
		}
	
	}
	
}
