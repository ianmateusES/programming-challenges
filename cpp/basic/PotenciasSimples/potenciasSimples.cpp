#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num, potencia;

    cin >> num >> potencia;

    cout.precision(4);
    cout.setf(ios::fixed);

    cout << pow(num, potencia) << endl;

    return 0;
}