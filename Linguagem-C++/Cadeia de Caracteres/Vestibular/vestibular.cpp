#include <iostream>

using namespace std;

int main() {
    int count = 0, n;
    string gabarito, resp;

    cin >> n;

    cin >> gabarito >> resp;

    for(int i = 0; i < n; i++)
        if(gabarito[i] == resp[i])
            count++;
    
    cout << count << endl;

    return 0;
}