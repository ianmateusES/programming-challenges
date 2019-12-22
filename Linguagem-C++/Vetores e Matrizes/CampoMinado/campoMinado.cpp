/*
    Leonardo é um garoto fascinado por jogos de tabuleiro. Nas férias de 
    janeiro, ele aprendeu um jogo chamado Campo minado, que é jogado em 
    um tabuleiro com N células dispostas na horizontal. O objetivo desse 
    jogo é determinar, para cada célula do tabuleiro, o número de minas 
    explosivas nos arredores da mesma (que são a própria célula e as 
    células imediatamente vizinhas à direita e à esquerda, caso essas 
    existam). Por exemplo, a figura abaixo ilustra uma possível configuração 
    de um tabuleiro com 5 células:

    A primeira célula não possui nenhuma mina explosiva, mas é vizinha de 
    uma célula que possui uma mina explosiva. Nos arredores da segunda 
    célula temos duas minas, e o mesmo acontece para a terceira e quarta 
    células; a quinta célula só tem uma mina explosiva em seus arredores. 
    A próxima figura ilustra a resposta para esse caso.

    Leonardo sabe que você participa da OBI e resolveu lhe pedir para 
    escrever um programa de computador que, dado um tabuleiro, imprima o 
    número de minas na vizinhança de cada posição. Assim, ele poderá 
    conferir as centenas de tabuleiros que resolveu durante as férias.

    Entrada:
    A primeira linha da entrada contém um inteiro N indicando o número de 
    células no tabuleiro. O tabuleiro é dado nas próximas N linhas. A i-ésima 
    linha seguinte contém 0 se não existe mina na i-ésima célula do tabuleiro 
    e 1 se existe uma mina na i-ésima célula do tabuleiro.

    Saída:
    A saída é composta por N linhas. A i-ésima linha da saída contém o número 
    de minas explosivas nos arredores da i-ésima célula do tabuleiro.
*/

#include <iostream>

using namespace std;

int main() {
    int n, v[50];

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < n; i++){
        int qtd = 0;
        
        qtd += v[i];

        if(i > 0)
            qtd += v[i-1];
        if(i < n-1)
            qtd += v[i+1];
        
        cout << qtd << endl;
    }

    return 0;
}