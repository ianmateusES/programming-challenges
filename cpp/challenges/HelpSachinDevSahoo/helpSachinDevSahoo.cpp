#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T, K, time;
  
  string S;
  
  cin >> T;
  while(T--) {
    cin >> S >> K;
    time = 0;

    for(int i=0; i < (S.length()-K+1); i++)
      if(S[i] == '0') {
        for(int j=i; j < (i+K); j++)
          S[j] = S[j] == '0' ? '1' : '0';
        time++;
      }

    for(int i=0; i < S.length(); i++)
      if(S[i] == '0') {
        time = -1;
        break;
      }

    cout << time << endl;
  }
}