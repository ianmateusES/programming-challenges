#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
	int m, n, empty_seats;
	priority_queue<ll> que;
	
	cin >> m >> n;
	for(int i=0; i < m; i++) {
		cin >> empty_seats;
		que.push(empty_seats);
	}

	ll resp = 0;
	while(n--) {
		ll top = que.top();
		que.pop();
		resp += top;
		que.push(top - 1LL);
	}
	
	cout << resp << endl;
}
