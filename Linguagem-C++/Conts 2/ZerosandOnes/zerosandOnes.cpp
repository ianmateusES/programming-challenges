/*
  Dada uma sequência de 0 e 1 com até 1000000 caracteres e índices iej, você deve responder a uma 
  pergunta se todos os caracteres entre a posição min (i, j) e a posição max (i, j) (inclusive) são 
  iguais.

  Entrada
  Existem vários casos na entrada. A primeira linha de cada caso fornece uma sequência de 0 e 1. A 
  próxima linha contém um número inteiro positivo n, fornecendo o número de consultas para este caso. 
  As próximas n linhas contêm consultas, uma por linha. Cada consulta é dada por dois números inteiros 
  não negativos, i e j. Para cada consulta, você deve imprimir 'Sim' se todos os caracteres na sequência 
  entre a posição min(i, j) e a posição max(i, j) forem iguais e 'Não' caso contrário.

  Saída
  Cada caso na saída deve começar com um cabeçalho como na amostra abaixo. A entrada termina com uma 
  sequência vazia que é uma linha que contém apenas o novo caractere de linha; essa sequência não deve 
  ser processada. A entrada também pode estar no final do arquivo. Portanto, verifique os dois.

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int caseConsult, i, j, consult, cases = 1;
  string str;

  while(cin >> str){
    cin >> caseConsult;
    cout << "Case " << cases++ << ":" << endl;
    
    while(caseConsult--){
      cin >> i >> j;
      
      if(i>j) swap(i,j);

      string subString = str.substr(i, j - i + 1);
      if(subString.size() <= 1 || unique(subString.begin(), subString.end()) == subString.begin() + 1)
        cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
   
  return 0;
}