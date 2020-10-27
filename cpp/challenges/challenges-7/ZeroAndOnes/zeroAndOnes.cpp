#include<bits/stdc++.h>
using namespace std;

int tree[4000100];

void build(int low, int high, int node){
  if(low == high) {
    tree[node] = 1;
    return;
  }

  int mid = (low + high) / 2;
  build(low, mid, 2*node);
  build(mid+1, high, 2*node+1);
  tree[node] = tree[2*node] + tree[2*node+1];
}
void update(int low, int high, int node, int v){
  if(low == high && low == v){
    tree[node] = 0;
    return;
  }
  
  int mid = (low + high) / 2;
  if(v <= mid) update(low, mid, 2*node, v);
  else update(mid+1, high, 2*node+1, v);

  tree[node] = tree[2*node] + tree[2*node+1];
}

int query(int low, int high, int node, int k){
  if(tree[node] < k) return -1;

  if(low == high && k == 1) return low;

  int mid = (low + high) / 2;
  if(tree[2*node] < k) return query(mid+1, high, 2*node+1, k-tree[2*node]);
  else return query(low, mid, 2*node, k); 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  build(1,n,1);
  
  int q; cin >> q;
  while(q--){
    int a, b; cin >> a >> b;

    if(a) cout << query(1,n,1,b) << endl;
    else update(1,n,1,b);
  }
}