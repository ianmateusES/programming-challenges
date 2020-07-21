#include <bits/stdc++.h>

using namespace std;

const int inf = 1e6 + 1;

int main() {
  // Fast IO
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int T, N, K;
  int value;
  int min;
  
  cin >> T;

  while(T--) {
    min = inf;
    cin >> N >> K;

    for(int i=0; i<N; i++) {
      cin >> value;
      if(value < min)
        min = value;
    }

    int res = K - min;

    if(res <= 0)
      cout << "0" << endl;
    else
      cout << res << endl;
  }
}