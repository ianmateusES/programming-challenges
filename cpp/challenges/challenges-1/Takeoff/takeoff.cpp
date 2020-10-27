#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5;
int a[MAXN];

int main() {    
  int T;
  long int N, p, q, r, i, daySum;

  cin >> T;
  while(T--) {
    cin >> N >> p >> q >> r;
    daySum = 0;
    for(i=0; i <= N; i++) a[i] = 0;
    for(i=p; i <= N; i+=p) a[i]++;
    for(i=q; i <= N; i+=q) a[i]++;
    for(i=r; i <= N; i+=r) a[i]++;
    
    for(i=0; i <= N; i++)
        if(a[i] == 1) daySum++;
    
    cout << daySum << endl;
  }
}