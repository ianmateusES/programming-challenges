#include <bits/stdc++.h>

using namespace std;

int main() {
    double nota1, nota2, media;

    cin >> nota1 >> nota2;

    media = (nota1+nota2)/2;
    
    if(media >= 7)
        cout << "Aprovado" << endl;
    else if(media >= 4)
        cout << "Recuperacao" << endl;
    else 
        cout << "Reprovado" << endl;
    
    return 0;
}