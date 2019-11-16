#include <stdio.h>
main() {
	float a, b, resultado;
	char operacao;
	
	printf("Digite o primeiro numero:\n");
	scanf("%f", &a);
	printf("Digite o segundo numero:\n");
	scanf("%f", &b);
	printf("Digite a operacao:\n");
	scanf("%s", &operacao);

	switch(operacao){
		case '+':
			resultado = a + b;
			printf("Resultado: %.3f\n", resultado);
		break;
		
		case '-':
			resultado = a - b;
			printf("Resultado: %.3f\n", resultado);
		break;
		
		case '*':
			resultado = a * b;
			printf("Resultado: %.3f\n", resultado);
		break;
		
		case '/':
			resultado = a / b;
			printf("Resultado: %.3f\n", resultado);
		break;
	    default:
	    	printf("Invalida");
	    break;
	}
	
	printf("---------\n");
  }
