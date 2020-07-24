#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+1;

long long A[MAXN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int T, N;
	cin >> T;

	while(T--) {
    cin >> N;

    for(int i=0; i < N; i++) cin >> A[i];

    sort(A, A+N);

    long long sum = 0, result = 0;
    for(int i=0; i < N; i++) {
        result = max(result, A[i]*(N-i)-sum);
        sum += A[i];
    }

    cout << result << endl;
	}
}
