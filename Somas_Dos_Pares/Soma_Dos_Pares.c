#include <stdio.h>
int main() {
	int a = 0, b = 0, soma = 0; // Declaração de variaveis
	
	printf("Digite o menor numero:\n");
	scanf("%d", &a); // Recebe o A
	printf("Digite o maior numero:\n");
	scanf("%d", &b); // Recebe o B
	printf("\n");
	
	if (a > b){
		printf(" %d eh maior que %d - ERRO\n", a, b);
	} 
	else {
		for(; a <= b; a++){
			if (a%2 == 0){
				soma += a;
			}
		}
		printf("%d\n", soma);	
	}
  printf("-----------------------------------------\n");
}
