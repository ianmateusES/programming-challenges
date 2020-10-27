#include <bits/stdc++.h>

using namespace std;

typedef	long long ll;
const int MAXN = 1e5+1;
int v[MAXN];

int main() {
	ios::sync_with_stdio(0);
  cin.tie(0);

	int t;
	
	cin >> t;
	while(t--) {
		int n, k;
		map<int, ll> mp;

		cin >> n;
		for(int i=0; i < n; i++) cin >> v[i];

		cin >> k;
		ll resp = 0;
		for(int i=0; i < n; i++) {
			resp += mp[k - v[i]];
			mp[v[i]]++;
		}
		cout << resp << endl;
	}
}
