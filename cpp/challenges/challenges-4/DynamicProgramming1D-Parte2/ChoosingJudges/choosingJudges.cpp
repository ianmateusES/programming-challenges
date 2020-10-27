#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 1e4 + 10;
ll dp[MAXN], a[MAXN];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t,temp=0;
	cin >> t;
  while(t--) {
    int n;
    cin >> n;
    
    memset(dp, 0, sizeof dp);
    memset(a, 0, sizeof a);
    temp++;
      
    for(int i=0; i<n; i++) cin >> a[i];
    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);
    
    for(int i=2; i<n; i++) dp[i] = max(dp[i-2]+a[i], dp[i-1]);
    
    cout << "Case " << temp << ": " << dp[n-1] << endl;
  }
}
