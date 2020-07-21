#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, v[100000], v_sort[100000], recolhidos[100000], qtdrecolhidos = 0, maior = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        v_sort[i] = v[i];
    }
    
    sort(v_sort, v_sort+n);

    for(int i = 0; i < n; i++){
        if(v[i] != v_sort[i]){
            recolhidos[qtdrecolhidos] = v[i];
            qtdrecolhidos++;
        }
    }

    cout << qtdrecolhidos << endl;
    
    sort(recolhidos, recolhidos+qtdrecolhidos);
    
    for(int i = 0; i < qtdrecolhidos; i++)
        cout << recolhidos[i] << " ";

    cout << endl;
    return 0;
}