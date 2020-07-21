/*
  Em julho de 2003, a BBC relatou uma extensa investigação de Loch Ness por uma equipe da BBC, usando 
  600 feixes de sonar separados, e não encontrou vestígios de nenhum "monstro marinho" (ou seja, 
  qualquer animal grande, conhecido ou desconhecido) no lago. A equipe da BBC concluiu que Nessie 
  não existe. Agora queremos repetir o experimento.

  Dada uma grade de n linhas e m colunas representando o loch, 6 ≤ n, m ≤ 10000, encontre o número 
  mínimo s de feixes de sonar que você deve colocar no quadrado para que possamos controlar todas as 
  posições na grade, com as seguintes condições :

  - Um sonar ocupa uma posição na grade; o feixe do sonar controla sua própria célula e as células 
  contíguas;
  - As células da borda não precisam ser controladas, porque Nessie não pode se esconder lá (ela é 
  muito grande).

  Entrada
  A primeira linha da entrada contém um número inteiro, t , indicando o número de casos de teste. 
  Para cada caso de teste, há uma linha com dois números separados por espaços em branco, 6 ≤ n , 
  m ≤ 10000, ou seja, o tamanho da grade ( n linhas e m colunas).

  Saída
  Para cada caso de teste, a saída deve consistir em uma linha mostrando o número mínimo de sonares 
  que verifica as condições acima.

*/

#include <iostream>

using namespace std;

int main() {
  int t, n, m;

  cin >> t;

  while(t--){
    cin >> n >> m;
    cout << (n/3)*(m/3) << endl;
  }
  
  return 0;
}
