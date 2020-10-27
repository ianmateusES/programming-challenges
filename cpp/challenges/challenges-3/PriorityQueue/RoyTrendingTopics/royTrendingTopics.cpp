#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef tuple<ll, ll, ll> tuplell;

struct compareTupla {  
  bool operator()(const tuplell & p1, const tuplell & p2) {
    ll id_p1, difscore_p1, id_p2, difscore_p2;
    tie(id_p1, difscore_p1, ignore) = p1;
    tie(id_p2, difscore_p2, ignore) = p2;
    if(difscore_p1 != difscore_p2)
      return difscore_p1 < difscore_p2; 
    return id_p1 < id_p2;       
  }
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  priority_queue<tuplell, vector<tuplell>, compareTupla> que;
  
  cin >> n;
  for (int i=0; i < n ; i++) {
    ll id, z, p, l, c, s, zscore = 0;
    cin >> id >> z >> p >> l >> c >> s;
    zscore += p*50 + l*5 + c*10 + s*20;
    que.push(make_tuple(id, zscore - z, zscore));
  }
  
  int t = 5;
  while(t--) {
    ll id, zscore;
    tie(id, ignore, zscore) = que.top();
    que.pop();
    cout << id << " " << zscore << endl;
  }
}
