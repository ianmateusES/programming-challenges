#include <bits/stdc++.h>

using namespace std;

const int MAXK = 10010, MAXN = 100010;
int f[MAXK], v[MAXN];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--){
    int n, k, j=0, ans, cnt=0;
	
	  cin >> n >> k;
    for(int i=1; i<=k; i++) f[i] = 0;
	  for(int i=0; i<n; i++) cin >> v[i];
    
    ans = n;
    for(int i=0; i<n; i++) {
      while(j<n and cnt < k) {
        f[v[j]]++;
        if(f[v[j]] == 1) cnt++;
		    j++;
      }
	    if(cnt == k) ans = min(ans, j-i);
      f[v[i]]--;
      if(f[v[i]] == 0) cnt--;
    }
    cout << ans << endl;
  }
}