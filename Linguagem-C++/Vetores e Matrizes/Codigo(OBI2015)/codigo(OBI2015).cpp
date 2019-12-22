/*
    Gabriel inventou um código para representar números naturais, usando uma 
    sequência de zeros e uns. Funciona assim, o número natural é representado 
    pela quantidade de vezes que o padrão "100" aparece na sequência.

    Por exemplo, na sequência 11101001010011110, o padrão aparece duas vezes 
    e na sequência 11101010111110111010101 ele não aparece nenhuma vez. Você 
    deve ajudar Gabriele implementar um programa que, dada a sequência de 
    zeros e uns, calcule quantas vezes o padrão "100" aparece nela.

    Entrada:
    A primeira linha da entrada contém um inteiro N, o tamanho da sequência. 
    A segunda linha contém a sequência de N zeros e uns, separados por espaço 
    em branco.

    Saída:
    Seu programa deve imprimir um inteiro, quantas vezes o padrão "100" 
    aparece na sequência.
*/

#include <iostream>

using namespace std;

int main() {
    int n, qtd = 0, v[10000];

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < n-2; i++){
        if(v[i] == 1 && v[i+1] == 0 && v[i+2] == 0)
            qtd++;
    }

    cout << qtd << endl;
    return 0;
}