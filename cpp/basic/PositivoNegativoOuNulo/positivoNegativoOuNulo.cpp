#include <iostream>

using namespace std;

int main() {
    int valor;

    cin >> valor;

    if(valor > 0)
        cout << "positivo" << endl;
    else if (valor < 0)
        cout << "negativo" << endl;
    else 
        cout << "nulo" << endl;
    
    return 0;
}