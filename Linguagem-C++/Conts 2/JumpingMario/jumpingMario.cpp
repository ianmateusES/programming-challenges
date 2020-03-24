/* 
  Mario está no castelo final. Ele agora precisa pular algumas paredes e entrar na Câmara dos Koopa, 
  onde ele tem que derrotar o monstro para salvar a princesa. Para este problema, estamos preocupados 
  apenas com o salto sobre o muro. Você receberá as alturas de N paredes da esquerda para a direita.
  Mario está atualmente de pé na primeira parede. Ele tem que pular para as paredes adjacentes, uma 
  após a outra, até chegar à última. Isso significa que ele fará saltos (N-1). Um salto em altura é 
  aquele em que Mario tem que pular para uma parede mais alta e, similarmente, um salto em altura é 
  aquele em que Mario tem que pular para uma parede mais curta. Você consegue descobrir o número total 
  de saltos altos e baixos que Mario tem que fazer?

  Entrada
  A primeira linha de entrada é um número inteiro T (T <30) que indica o número de casos de teste. 
  Cada caso começa com um número inteiro N (0 <N <50) que determina o número de paredes. A próxima 
  linha indica a altura das paredes N da esquerda para a direita. Cada altura é um número inteiro 
  positivo que não excede 10.

  Saída
  Para cada caso, imprima o número do caso seguido por 2 números inteiros, saltos altos totais e 
  saltos baixos totais, respectivamente. Veja o exemplo para obter o formato exato.

*/

#include <iostream>

using namespace std;

int main() {
	int testcase, wallquantity, high, low, i, pos, tam[51];

  cin >> testcase;

  for(int j=1; j<=testcase; j++){
    cin >> wallquantity;
    for(i=0; i<wallquantity; i++) cin >> tam[i];
    
    pos = tam[0];
    high = low = 0;
    for(i=1; i<wallquantity; i++){
      // pos>tam[i]?low++:high++;
      if(pos>tam[i]) low++;
      else if(pos<tam[i]) high++;
      pos = tam[i];
    }
    cout << "Case " << j << ": " << high << " " << low << endl; 
  }

  return 0;
}