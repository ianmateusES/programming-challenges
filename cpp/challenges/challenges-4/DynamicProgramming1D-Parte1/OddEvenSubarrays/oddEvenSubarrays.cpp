#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 2*1e5 + 10;
int a[MAXN];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

	int i, j, n;
	cin >> n;
	for(i = 1; i <= n; ++i) {
		cin >> a[i];
		if(a[i]&1) a[i] = -1;
		else a[i] = 1;
	}

	map<int, int> mp;
	mp[0]++;

	ll ans = 0;
	for(i = 1; i <= n; ++i) {
		a[i] += a[i - 1];
		ans += mp[a[i]];
		mp[a[i]]++;
	}

	cout << ans << endl;
}
