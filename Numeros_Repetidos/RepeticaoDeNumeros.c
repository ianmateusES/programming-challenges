#include <stdio.h>
int main () {
	int n1, n2, n3;
	
	printf("Digite os numeros\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	printf("\n");
	
	if((n1 == n2) && (n1 == n3) && (n2 == n3)){
		printf("Os 3 numeros sao iguais\n");
	} else {
		if((n1 == n2) || (n1 == n3) || (n2 == n3)){
			printf("2 dos tres numeros sao iguais\n");
		} else {
		    printf("0 - Nenhum dos numeros sao iguais\n");
		}	
	}
	printf("------------------------------\n");
}
