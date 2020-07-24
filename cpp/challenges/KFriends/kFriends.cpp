#include<bits/stdc++.h>
using namespace std;

long long Gifts (vector<int> S, int K) {
    int qtdFriend = S.size();
    sort(S.begin(), S.end());
 
   int prest = 0;
   int satisfyKthFriend = S[K-1];
 
   for(int i=0; i<K-1; i++) prest += S[i];
 
   prest += (qtdFriend-K+1)*satisfyKthFriend;
   return prest;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> S(N);
        for(int i_S=0; i_S<N; i_S++)
        {
        	cin >> S[i_S];
        }
        int K;
        cin >> K;

        long long out_;
        out_ = Gifts(S, K);
        cout << out_;
        cout << "\n";
    }
}