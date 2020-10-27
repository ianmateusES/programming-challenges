#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
  cin.tie(0);

	int testCase;
	cin >> testCase;

	while(testCase--) {
		vector<ll> A, B;
		int n;
		cin >> n;

		A.resize(n);
		for(int i = 0; i < n; i++) cin >> A[i];
		
		B.resize(n);
		for(int i = 0; i < n; i++) cin >> B[i];

		ll resp = 0;
		for(int i = 0; i < n; i++) {
			ll start = i, end = n-1, result = 0;
			while(start <= end) {
				ll middle = (start + end)/2ll;
				if(B[middle] >= A[i]) {
					result = middle;
					start = middle + 1;
				} else {
					end = middle - 1;
				}
			}
			resp = max(resp, result-i);
		}

		cout << resp << endl;
	}
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);

	int testCase;
	cin >> testCase;

	while(testCase--) {
		vector<ll> A, B;
		int n;
		cin >> n;

		A.resize(n);
		for(int i = 0; i < n; i++) cin >> A[i];
		
		B.resize(n);
		for(int i = 0; i < n; i++) cin >> B[i];

		ll resp = 0;
		for(int i = 0; i < n; i++) {
			ll start = i, end = n-1, result = 0;
			while(start <= end) {
				ll middle = (start + end)/2ll;
				if(B[middle] >= A[i]) {
					result = middle;
					start = middle + 1;
				} else {
					end = middle - 1;
				}
			}
			resp = max(resp, result-i);
		}

		cout << resp << endl;
	}
}
