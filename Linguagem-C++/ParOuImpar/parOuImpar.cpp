/*
    Bino e Cino gostam muito de brincar de par ou ímpar. Bino sempre 
    escolhe par e Cino sempre escolhe ímpar.

    Faça um programa para automatizar o resultado o jogo de par ou 
    ímpar. Seu programa deve ler a quantidade de dedos que cada um 
    utilizou e imprimir o nome do ganhador.

    Entrada:
    A entrada consiste de duas linhas. A primeira linha contém a 
    quantidade de dedos que Bino utilizou. A segunda linha contém a 
    quantidade de dedos que Cino utilizou.

    Saída:
    A saída consiste de uma linha. Caso Bino vença o jogo, imprima 
    "Bino". Caso Cino vença o jogo, imprima "Cino".
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int bino, cino;
    cin >> bino >> cino;
    
    if((bino+cino)%2 == 0)
        cout << "Bino" << endl;
    else
        cout << "Cino" << endl;
        
    return 0;
}