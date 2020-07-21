/*
    Dada uma matriz quadrada M de números naturais, o índice i de uma certa 
    linha e o índice j de uma certa coluna, vamos definir o peso do cruzamento 
    da linha i com a coluna j, como sendo a soma de todos os elementos que 
    estejam na linha i ou na coluna j, mas não nas duas. Quer dizer, excluindo 
    o elemento que está exatamente no cruzamento! Neste problema, você deve 
    descobrir qual é o peso máximo entre todos os possíveis cruzamentos da 
    matriz!

    No jogo de xadrez, a torre é uma peça que pode se mover para qualquer 
    outra posição do tabuleiro na linha ou na coluna da posição que ela ocupa. 
    O professor Paulo está tentando inventar um novo tipo de jogo de xadrez 
    onde todas as peças são torres, o tabuleiro também é quadrado mas pode 
    ter qualquer dimensão e cada posição do tabuleiro é anotada com um número 
    inteiro positivo, como na figura abaixo.

    Ele definiu o peso de uma posição (i,j) como sendo a soma de todos os 
    números que estejam na linha i com todos os números da coluna j, mas sem 
    somar o número que está exatamente na posição (i,j). Quer dizer, se uma 
    torre estiver na posição (i,j), o peso da posição é a soma de todas as 
    posições que essa torre poderia atacar.

    O professor Paulo está solicitando a sua ajuda para implementar um 
    programa que determine qual é o peso máximo entre todas as posições do 
    tabuleiro.

    No exemplo da figura acima, com um tabuleiro de dimensão seis (ou seja, 
    seis linhas por seis colunas), o peso máximo é 67, referente à posição 
    (4,4).

    Entrada:
    A primeira linha da entrada contém um inteiro N, representando a dimensão 
    do tabuleiro.
    Cada uma das N linhas seguintes contém N inteiros positivos Xi, definindo 
    os números em cada posição do tabuleiro.

    Saída:
    Seu programa deve produzir uma única linha, contendo um único inteiro, o 
    peso máximo entre todas as posições do tabuleiro.
*/

#include <iostream>

using namespace std;

int main() {
    int matriz[1000][1000], somaL[1000], somaC[1000];
    int n, nMaior = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
        somaL[i] = 0;
        somaC[i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            somaL[i] += matriz[i][j];
            somaC[i] += matriz[j][i];
        }
    }      

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int posicao = somaL[i] + somaC[j] - 2*matriz[i][j];
            if(posicao > nMaior)
                nMaior = posicao;
        }
    }
    
    cout << nMaior << endl;

    return 0;
}