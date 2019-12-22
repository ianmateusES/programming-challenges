/*
    Chama-se de quadrado mágico um arranjo, na forma de um quadrado, de N×N 
    números inteiros tal que todas as linhas, colunas e diagonais têm a mesma 
    soma.

    Por exemplo, o quadrado abaixo:
        \begin{bmatrix}
            2 & 7 & 6 \
            9 & 5 & 1 \
            4 & 3 & 8 
        end{bmatrix}\
    é um quadrado mágico de soma 15, pois todas as linhas (2+7+6 = 15, 
    9+5+1 = 15 e 4+3+8 = 15), colunas (2 + 9 + 4 = 15, 7 + 5 + 3 = 15 e 
    6 + 1 + 8 = 15) e diagonais (2 + 5 + 8 = 15 e 6 + 5 + 4 = 15) têm a 
    mesma soma (15).

    Escreva um programa que, dado um quadrado, determine se ele é magico 
    ou não e qual a soma dele (caso seja mágico).

    Entrada:
    A entrada contém um único conjunto de testes, que deve ser lido do 
    dispositivo de entrada padrão. A primeira linha da entrada de cada 
    caso de teste contém um inteiro N. As N linhas seguintes contêm N 
    inteiros cada, separados por exatamente um espaço em branco. Os inteiros 
    dentro do quadrado são todos maiores que 0 (zero) e menores que 1.000.

    Saída:
    Seu programa deve imprimir, na saída padrão, uma única linha com um 
    inteiro representando a soma do quadrado mágico ou -1 caso o quadrado 
    não seja mágico.
*/

#include <iostream>

using namespace std;

int main() {
    int quadrado[10][10], n, somaL = 0, somaLA = 0, somaC = 0, somaCA = 0;
    int somaDP = 0, somaDS = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
           cin >> quadrado[i][j];

    for(int i = 0; i < n; i++){
        somaLA = 0;
        somaCA = 0;
        for(int j = 0; j < n; j++){
            if(i == 0){
                somaL += quadrado[i][j];
                somaC += quadrado[j][i];
            } else {
                somaLA += quadrado[i][j];
                somaCA += quadrado[j][i];
            }
        }
        somaDP += quadrado[i][i];
        somaDS += quadrado[i][(n-1) - i];
        if((i != 0 && somaL != somaLA) || (i != 0 && somaC != somaCA)){
            somaL = -1;
            somaC = -1;
            break;
        }
        if(i == n-1 && (somaDP != somaDS || somaDS != somaL)){
            somaDP = -1;
            somaDS = -1;
        }
    }

    if(somaDP == somaDS && somaDS == somaL && somaL == somaC)
        cout << somaL << endl;
    else 
        cout << -1 << endl;

    return 0;
}