#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int entradas;
    double num;

    cin >> entradas;

    cout.precision(4);
    cout.setf(ios::fixed);

    for(int i = entradas; i > 0; i--){
        cin >> num;
        cout << sqrt(num) << endl;
    }

    return 0;
}