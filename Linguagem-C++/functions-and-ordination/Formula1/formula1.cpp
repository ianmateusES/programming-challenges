#include <iostream>
#include <algorithm>

using namespace std;

struct piloto {
    int id, potuacao;
};

int funcPoint(piloto a, piloto b){
    if(a.potuacao == b.potuacao)
        return a.id < b.id;
    
    return a.potuacao > b.potuacao;
}

int funcId(piloto a, piloto b){
    return a.id < b.id;
}

int main() {
    int g, p, s, k;
    
    while(true) {
        piloto v[100];
        int corridas[100][100];
        int pontos;

        cin >> g >> p;
        
        if(g == 0 && p == 0)
            break;

        for(int i = 0; i < p; i++){
            v[i].id = i+1;
            v[i].potuacao = 0;
        }

        for(int i = 0; i < g; i++){
            for(int j = 0; j < p; j++){
                cin >> corridas[i][j];
            }
        }

        cin >> s;

        for(int i = 0; i < s; i++){
            cin >> k;
            for(int j = 0; j < k; j++){
                cin >> pontos;

                // Pontuo os pilotos de acordo com sua posicao na corrida
                for(int m = 0; m < g; m++)
                    for(int n = 0; n < p; n++)
                        if(corridas[m][n]-1 == j)
                            v[n].potuacao += pontos;
            }
            
            sort(v,v+p, funcPoint); // Ordeno por potuacao

            // Printo os pilotos vencedores
            cout << v[0].id << " ";
            for(int j = 1; j < p; j++)
                if(v[0].potuacao == v[j].potuacao) 
                    cout << v[j].id << " ";
                else
                    break;
            cout << endl;

            // Ordeno por id novamente para proxima interacao e 0 a potuacao
            if(i != s-1){
                sort(v, v+p, funcId);
                for(int j = 0; j < p; j++)
                    v[j].potuacao = 0;
            }
        } // fim S
    } // fim while

    return 0;
}