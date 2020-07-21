/*
  German farmers are given a premium depending on the conditions at their farmyard. Imagine the 
  following simplified regulation: you know the size of each farmer’s farmyard in square meters 
  and the number of animals living at it. We won’t make a difference between different animals, 
  although this is far from reality. Moreover you have information about the degree the farmer uses 
  environment-friendly equipment and practices, expressed in a single integer greater than zero. 
  The amount of money a farmer receives can be calculated from these parameters as follows. First 
  you need the space a single animal occupies at an average. This value (in square meters) is then 
  multiplied by the parameter that stands for the farmer’s environment-friendliness, resulting in the 
  premium a farmer is paid per animal he owns. To compute the final premium of a farmer just multiply 
  this premium per animal with the number of animals the farmer owns.

  Entradas
  A primeira linha de entrada contém um único número inteiro positivo n (<20), o número de casos de 
  teste. Cada caso de teste começa com uma linha contendo um único número inteiro f (0 <f <20), o 
  número de agricultores no caso de teste. Essa linha é seguida por uma linha por agricultor, 
  contendo três números inteiros positivos cada: o tamanho da fazenda em metros quadrados, o número 
  de animais que ele possui e o valor inteiro que expressa a simpatia do agricultor. A entrada é 
  finalizada no final do arquivo. Nenhum número inteiro na entrada é maior que 100000 ou menor que 0.

  Saída
  Para cada caso de teste, imprima uma linha contendo um único número inteiro que contém a carga 
  total do orçamento da Alemanha, que sempre será um número inteiro. Não produza nenhuma linha em 
  branco.

*/

#include <iostream>

using namespace std;

int main() {
  int testcase, n, sum, tamFaz, n_animais, s_agricultor, j;

  cin >> testcase;

  while(testcase--) {
    cin >> n;
    sum = 0;
    for(j=0; j<n; j++){
      cin >> tamFaz >> n_animais >> s_agricultor;
      sum += tamFaz*s_agricultor;
    }
    cout << sum << endl;
  }

  return 0;
}