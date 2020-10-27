#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
	vector<ll> A;
	vector<ll> sumAscending;
	vector<ll> sumDownward;

	int N, K;
	cin >> N >> K;

	A.resize(N);
	sumAscending.resize(K);
	sumDownward.resize(K);
	for(int i=0; i<N; i++) cin >> A[i];

	sumAscending[K-1] = A[0], sumDownward[0] = 0;
	for(int i=1; i < K; i++) {
		sumAscending[K-1-i] = sumAscending[K-1-i+1] + A[i];
		sumDownward[i] = sumDownward[i-1] + A[N-i];
	}
	
	ll sumMax = 0;
	for(int i=0; i < K; i++)
		sumMax = max(sumMax, sumAscending[i]+sumDownward[i]);

	cout << sumMax << endl;
}