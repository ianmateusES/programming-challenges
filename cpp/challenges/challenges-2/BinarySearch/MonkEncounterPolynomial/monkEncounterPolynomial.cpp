#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a, b, c;
ll f(ll x) {
	return a*(x*x) + b*x + c;
}

int main() {
	ios::sync_with_stdio(0);
  cin.tie(0);

	int t;
	cin >> t;

	while(t--) {
		ll k, result;
		cin >> a >> b >> c >> k;
		
		ll start=0, end=ceil(sqrt(k));
		while(start <= end) {
			ll middle = (start + end)/2ll;
			if(f(middle) >= k) {
				end = middle - 1LL;
				result = middle;
			} else {
				start = middle + 1LL;
			}
		}

		cout << result << endl;
	}
}
