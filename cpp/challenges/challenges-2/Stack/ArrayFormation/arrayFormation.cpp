#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 10;
bool cousins[MAX];

void checking_cousins() {
  cousins[0] = cousins[1] = false;
  for(int i=2; i < MAX; i++) cousins[i] = true;
  
  for(int i=2; i < MAX; i++)
    if(cousins[i])
      for(int j=i+i; j < MAX; j+=i) cousins[j] = false;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
    
  vector<int> A(n);
  for(int i=0; i < n; i++) cin >> A[i];

  queue<int> que;
  stack<int> stk;

  checking_cousins();
  for(int i=0; i < n; i++)
    cousins[A[i]] ? que.push(A[i]) : stk.push(A[i]);
   
  while(!que.empty()) {
    cout << que.front() << " ";
    que.pop();
  }
  cout << endl;

  while(!stk.empty()) {
    cout << stk.top() << " ";
    stk.pop();
  }
  cout << endl;
}
