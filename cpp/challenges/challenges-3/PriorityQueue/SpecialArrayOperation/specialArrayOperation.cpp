#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int n, q, k;
  ll sum;

  cin >> n >> q;

  vector<ll> ans;
  ans.resize(n);

  priority_queue<ll, vector<ll>, greater<ll>> smaller;
  priority_queue<ll> maximum;

  for(int i = 0; i < n; i++) {
    ll aux;
    cin >> aux;
    sum += aux;
    smaller.push(aux); maximum.push(aux);
  }

  ans[0] = sum;
  for(int i = 1; i < n; i++) {
    ll small = smaller.top(), max = maximum.top();
    smaller.pop(); maximum.pop();
    ans[i] = sum - small - max + (max - small);
    sum = ans[i];
    maximum.push(max - small); smaller.push(max - small);
  }

  for(int i = 0; i < q; i++) {
    cin >> k;
    cout << ans[k] << endl;
  }
}