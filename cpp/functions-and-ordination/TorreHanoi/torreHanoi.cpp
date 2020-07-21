#include <iostream>

using namespace std;

int Hanoi(int n){
    if(n==1)
        return 1;
    
    return 2*Hanoi(n-1) + 1;
}

int main() {
    int n = 1, i = 1;

    cin >> n;

    while (n > 0){
        cout << "Teste " << i << endl;
        cout << Hanoi(n) << endl;
        cout << endl;

        i++;
        cin >> n;
    }

    return 0;
}