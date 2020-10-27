#include<bits/stdc++.h>
 
using namespace std;
 
#define MAXN 500001
int tree[4*MAXN], arr[MAXN];
 
void build(int node, int start, int end) {
  if(start == end) {
    tree[node] = 0;
  } else {
    int mid = (start + end)/2;
    build(2*node + 1, start, mid);
    build(2*node + 2, mid + 1, end);
    tree[node] = tree[2*node+1] + tree[2*node+2];
  }
}
 
void update(int node, int start, int end, int idx, int v) {
  if(start == end) {
    if(!(v < 0 and tree[node] <= 0)) tree[node] += v;
  } else {
    int mid = (start + end)/2;
    if(idx >= start and idx <= mid) update(2*node + 1, start, mid, idx, v);
    else  update(2*node + 2, mid+1, end, idx, v);

    tree[node] = tree[2*node + 1] + tree[2*node + 2];
  }
}
 
int query(int node, int start, int end, int l, int r) {
  if(end < l or start > r) return 0;
  if(start >= l and end <= r) return tree[node];
    
	int mid = (start + end)/2;
  int a = query(2*node + 1, start, mid, l, r);
  int b = query(2*node + 2, mid + 1, end, l, r);
  return a + b;
}
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n,q,a,b,c;
  cin >> n >> q;

  build(0,0,n-1);

  while(q--) {
    cin >> a >> b;
    if(a == 1) update(0,0,n-1,b-1,1);
    else if(a == 2) update(0,0,n-1,b-1,-1);
    else {
      cin >> c;
      cout << query(0,0,n-1,b-1,c-1) << '\n';
    }
  }
  return 0;
}