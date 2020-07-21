/*
    Roberto tem um conjunto de lápis com 10 tons diferentes de uma mesma 
    cor, numerados de 0 a 9. Numa fita quadriculada, alguns quadrados foram 
    coloridos inicialmente com o tom 0.

    Roberto precisa determinar, para cada quadrado Q não colorido, qual é a 
    distância dele para o quadrado mais próximo de tom 0. A distância entre 
    dois quadrados é definida com o número mínimo de movimentos para a 
    esquerda, ou para a direita, para ir de um quadrado para o outro. O 
    quadrado Q, então, deve ser colorido com o tom cuja numeração corresponde 
    à distância determinada. Se a distância for maior ou igual a 9, o quadrado 
    deve ser colorido com o tom 9. Seu programa deve colorir e imprimir a fita 
    quadriculada dada na entrada.

    Entrada:
    A primeira linha da entrada contém apenas um inteiro N, indicando o 
    número de quadrados da fita. A segunda linha contém N números inteiros: 
    “-1” se o quadrado não está colorido, e “0” se está colorido com o tom 0.

    Saída:
    Seu programa deve escrever na saída a fita totalmente colorida, de acordo 
    com a regra definida acima.
*/

#include <iostream>

using namespace std;

int main() {
    int n, v[10000], d[10000], e[10000], distD = 9, distE = 9;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < n; i++){
        if(v[i] == 0) distD = 0;
        if(v[(n-1)-i] == 0) distE = 0;
        
        d[i] = distD++;
        e[(n-1)-i] = distE++;
        
        if(distD > 9) distD = 9;
        if(distE > 9) distE = 9;
    }   

    for(int i = 0; i < n; i++)
        if(d[i] <= e[i])
            cout << d[i] << " ";
        else
            cout << e[i] << " ";
    
    cout << endl;

    return 0;
}