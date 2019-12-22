#include <iostream>

using namespace std;

int main() {
    int algarismos[] = {0,0,0,0,0,0,0,0,0,0} , n, j;
    string num;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        j = 0;
        while(j < num.size()){
            
            switch (num[j]) {
            case '0':
                algarismos[0] += 1;
                break;
            case '1':
                algarismos[1] += 1;
                break;
            case '2':
                algarismos[2] += 1;
                break;
            case '3':
                algarismos[3] += 1;
                break;
            case '4':
                algarismos[4] += 1;
                break;
            case '5':
                algarismos[5] += 1;
                break;
            case '6':
                algarismos[6] += 1;
                break;
            case '7':
                algarismos[7] += 1;
                break;
            case '8':
                algarismos[8] += 1;
                break;
            case '9':
                algarismos[9] += 1;
                break;
            }
            j++;
        }
    }

    for(int i = 0; i < 10; i++)
        cout << i << " - " << algarismos[i] << endl;

    return 0;
}