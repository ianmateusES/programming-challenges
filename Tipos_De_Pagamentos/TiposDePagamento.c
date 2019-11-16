#include <stdio.h>

float operacao1(float valor);
float operacao2(float valor);
void operacao3(float valor);

int main(){
    float valor;
    int opcao;
    printf("Digite o valor gasto:\t");
    scanf("%f", &valor);
    printf("\n");
    printf("Formas de pagamento:\n");
    printf("Opcao 1: o pagamento e a vista com 10%% de desconto;\n");
    printf("Opcao 2: o pagamento pode ser parcelado em duas vezes; (preço da etiqueta)\n");
    printf("Opcao 3: o pagamento pode ser parcelado de 3 ate 10 vezes com juros compostos de 3%% ao mes (Somente para compras acima de R$ 100,00).\n");
    scanf("%d", &opcao);
    printf("\n");
    
    switch(opcao) {
        case 1:
            printf("Opcao 1 escolhida:\n valor a pagar: %.2f\n", operacao1(valor));
        break;
        
        case 2:
        	printf("Opcao 2 escolhida: \n Pagamento parcelado em duas vezes de R$ %.2f", operacao2(valor));
        break;
        
        case 3:
        if (valor > 100){
            printf("Opcao 3 escolhida:\n");
            operacao3(valor);
        } else {
            printf("Valor igual ou menor que 100 reias\n");
        }
        break;
    }
    return 0;
}


float operacao1(float valor){
	valor -= 0.10 * valor;
	return valor;
}

float operacao2(float valor){
	valor = valor/2;
	return valor;
}

void operacao3(float valor){
	float result = 0;
	int i;
	for(i = 3; i <= 10; i++){
		valor += valor * 0.03;
		result = valor/i;
		printf("Quantidade de parcelas: %d de R$  %.2f\n", i, result);
	}
}
