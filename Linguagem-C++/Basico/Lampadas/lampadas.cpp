/*
    Você está de volta em seu hotel na Tailândia depois de um dia de 
    mergulhos. O seu quarto tem duas lâmpadas. Vamos chamá-las de A e 
    B. No hotel há dois interruptores, que chamaremos de I1 e I2. Ao 
    apertar I1, a lâmpada A acende se estiver apagada, e apaga se estiver 
    acesa. Se apertar I2, cada uma das lâmpadas A e a B troca de estado: 
    se estiver apagada, fica acesa e se estiver acesa apaga.

    As lâmpadas inicialmente estão ambas apagadas. Seu amigo resolveu 
    bolar um desafio para você. Ele irá apertar os interruptores em uma 
    certa sequência, e gostaria que você respondesse o estado final das 
    lâmpadas A e B.

    Entrada:
    A primeira linha contém um número N que representa quantas vezes seu 
    amigo irá apertar algum interruptor. Na linha seguinte seguirão N 
    números, que pode ser 1, se o interruptor I1 foi apertado, ou 2, se 
    o interruptor I2 foi apertado.

    Saída:
    Seu programa deve imprimir dois valores, em linhas separadas. Na primeira 
    linha, imprima 1 se a lâmpada A estiver acesa no final das operações e 
    0 caso contrário. Na segunda linha, imprima 1 se a lâmpada B estiver 
    acesa no final das operações e 0 caso contrário.
*/

#include <iostream>

using namespace std;

int main() {
    int entradas, interruptor;
    bool lampada1 = 0, lampada2 = 0;

    cin >> entradas;

    for(; entradas > 0; entradas--){
        cin >> interruptor;
        if(interruptor ==  1){
            lampada1 = !lampada1;
            continue;
        } else if(interruptor == 2){
            lampada1 = !lampada1;
            lampada2 = !lampada2;
        }
    }
    cout << lampada1 << endl << lampada2 << endl;
    return 0;
}