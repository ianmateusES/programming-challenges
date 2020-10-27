#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
  cin.tie(0);

	stack<int> stk;
	
	int N, count = 0, value;
	cin >> N;

	for(int i=0; i < N; i++){
		cin >> value;
		// value greater than tops
		while(!stk.empty() && stk.top() < value) {
			stk.pop();
			count++;
		}
		// top greater than value
		if(!stk.empty()) count++;
		
		stk.push(value);
	}

	cout << count << endl;
}
