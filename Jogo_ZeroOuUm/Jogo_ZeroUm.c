#include <stdio.h>
int main() {
	int jog1, jog2, jog3;
	
	printf("Digite os 3 valores:\n");
	scanf("%d", &jog1);
	scanf("%d", &jog2);
	scanf("%d", &jog3);
	printf("\n");
	
	if(((jog1 > 1) || (jog1 < 0)) || ((jog2 > 1) || (jog2 < 0)) || ((jog3 > 1) || (jog3 < 0))){
		printf("Pelo menos um dos valores esta incorreto, valores aceitos 0 e 1\n");
	} else {
		if((jog1 == jog2) && (jog1 == jog3)){
			printf("EMPATE\n");
		} else {
			if(((jog1 == 1) || (jog1 == 0)) && (jog2 == jog3)){
				printf("Primeiro jogador ganho\n");
			} else {
				if(((jog2 == 1) || (jog2 == 0)) && (jog1 == jog3)){
				    printf("Segundo jogador ganho\n");
			    } else {
			    	if(((jog3 == 1) || (jog3 == 0)) && (jog1 == jog2)){
				        printf("Terceiro jogador ganho\n");
			        }
				}
			}
		}
	}
  printf("-----------------------\n");
	
}
