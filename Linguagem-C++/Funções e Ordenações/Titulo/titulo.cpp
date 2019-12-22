#include <iostream>

using namespace std;

string title(string F){
    for(int i = 0; i < F.size(); i++){
        if (F[i] >= 'a' && F[i] <= 'z'){
            if(i == 0)
                F[i] -= 32;
            else if(F[i-1] == ' ')
                F[i] -= 32;
        } else if (F[i] >= 'A' && F[i] <= 'Z') {
                if(F[i-1] == ' ')
                    continue;
                else if(i != 0)              
                    F[i] += 32;
        }
        
        
    }

    return F;
}

int main(){ 
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}