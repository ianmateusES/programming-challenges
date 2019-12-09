/*
    A turma do colégio vai fazer uma excursão na serra e todos os
    alunos e monitores vão tomar um bondinho para subir até o pico
    de uma montanha. A cabine do bondinho pode levar 50 pessoas no 
    máximo, contando alunos e monitores, durante uma viagem até o pico.
    Neste problema, dado como entrada o número de alunos A e o número
    de monitores M, você deve escrever um programa que diga se é possível 
    ou não levar todos os alunos e monitores em apenas uma viagem!

    Entrada:
    A primeira linha da entrada contém um inteiro A, representando
    a quantidade de alunos. A segunda linha da entrada contém um 
    inteiro M, representando o número de monitores.

    Saída:
    Seu programa deve imprimir uma linha contendo o caractere S se 
    é possível levar todos os alunos e monitores em apenas uma viagem, 
    ou o caractere N caso não seja possível.
*/

#include <iostream>

using namespace std;

int main() {
    int alunos, monitores;
    
    cin >> alunos >> monitores;

    if(alunos+monitores <= 50)
        cout << "S" << endl;
    else 
        cout << "N" << endl;
        
    return 0;
}