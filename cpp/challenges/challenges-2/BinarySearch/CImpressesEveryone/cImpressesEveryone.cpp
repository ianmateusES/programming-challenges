#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
	int n;
	cin >> n;

	int a, sum[n+1];

	cin >> a;
	sum[1] = a;
	for(int i=1; i < n; i++) {
		cin >> a;
		sum[i+1] = sum[i] + a;
	}

	int q;
	cin >> q;
	while(q--) {
		int x;
		cin >> x;
		int start=1, end=n, result;
		x = sum[n] - x + 1;
		while(start <= end) {
			int middle = (start+end)/2;
			if(sum[middle] == x) {
				result = middle;
				break;
			}
			if(sum[middle] > x) {
				result = middle;
				end = middle - 1;
			} else {
				start = middle + 1;
			}
		}
		result%2 == 0 ? cout << 'B' << endl : cout << 'A' << endl;
	}
}