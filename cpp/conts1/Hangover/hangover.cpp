/*
  Até que ponto você pode fazer uma pilha de cartas saltar sobre uma mesa? Se você tiver um 
  cartão, poderá criar uma saliência máxima de metade do comprimento do cartão. (Supomos que 
  as cartas devam ser perpendiculares à mesa.) Com duas cartas, você pode fazer com que a carta 
  superior salte pela parte inferior uma pela metade do comprimento da carta, e a inferior saliente 
  a tabela por um terço do comprimento da carta, para uma saliência máxima total de 1/2 + 1/3 = 5/6 
  comprimentos de cartão. Em geral, você pode fazer n cards saltarem em 1/2 + 1/3 + 1/4 + ... + 
  1 / (n + 1), em que o cartão superior ultrapassa o segundo em 1/2, e o segundo oscila o terço 
  em 1/3, o terceiro sobrepõe o quarto em 1/4, etc., e a carta inferior sobrepõe a tabela em 1 / (n + 1). 
  Isto é ilustrado na figura abaixo.

  Entrada
  A entrada consiste em um ou mais casos de teste, seguidos por uma linha que contém o número 0,00 
  que sinaliza o final da entrada. Cada caso de teste é uma única linha que contém um número de ponto 
  flutuante positivo c cujo valor é pelo menos 0,01 e, no máximo, 5,20; c conterá exatamente três 
  dígitos.

  Saida
  Para cada caso de teste, imprima o número mínimo de cartões necessário para obter uma saliência de 
  pelo menos c comprimentos de cartão. Use o formato de saída exato mostrado nos exemplos.
  
*/
#include <iostream>

using namespace std;

int main() {
  double x;

  cin >> x;

  while(x != 0){
    double count = 0, card = 0;

    while(count < x) {
      card++;
      count += 1/(1+card);
    }

    cout << card << " card(s)" << endl;

    cin >> x;
  }

  return 0;
}