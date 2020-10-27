#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
int v[MAXN];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while(t--) {
    int n, sum = 0, resp1 = 0;
    
    cin >> n;
    for(int i=0; i<n; i++) cin >> v[i];
    
	  for(int i=0; i<n; i++) {
      sum = max(0, sum + v[i]);
      resp1 = max(resp1, sum);
    }

    sort(v, v+n);
    if(resp1 == 0) resp1 = v[n-1];
 
    int resp2 = v[n-1];
    for(int i=n-2; i>=0 and v[i]>0; i--) resp2 += v[i];
    
    cout << resp1 << " " << resp2 << endl;
  }
}