#include<bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T, N, minChanges;
  string S;

  cin >> T;

  while(T--) {
    cin >> N >> S;
    vector <int> countsumA;
    minChanges = N;

    countsumA.resize(N+1);
        
    countsumA[N] = 0;
    for(int i=N-1; i >= 0; i--)
      countsumA[i] = countsumA[i+1] + (S[i] == 'A' ? 1 : 0);
        
    int countsumB = 0;
        
    for(int i=0; i <= N; i++){
      minChanges = min(minChanges, countsumB + countsumA[i]);
      countsumB += S[i] == 'B' ? 1 : 0;
    }

    cout << minChanges << endl;
  }
}