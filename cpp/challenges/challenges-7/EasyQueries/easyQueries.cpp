#include <bits/stdc++.h>
using namespace std;

#define ll long long int
vector<ll> arr, tree;
 
void build(ll idx,ll s,ll e) {
  if(s>e) return;
  if(s==e) {
    tree[idx] = arr[s];
    return;
  }
  
  ll mid = s+(e-s)/2;
  build(2*idx,s,mid);
  build(2*idx+1,mid+1,e);
  tree[idx] = tree[2*idx]+tree[2*idx+1];
  return;
}

void update(ll idx,ll pos,ll val,ll s,ll e) {
  if(pos<s || pos>e) return;
  
  if(s==e) {
    tree[idx] = val;
    return;
  }

  ll mid = s+(e-s)/2;
  update(2*idx,pos,val,s,mid);
  update(2*idx+1,pos,val,mid+1,e);
  tree[idx] = tree[2*idx] + tree[2*idx+1];
  return;
}

ll cnt(ll idx,ll l,ll r,ll s,ll e) {
  if(r<s || l>e) return 0;
  
  if(s>=l && e<=r) return tree[idx];
  
  ll mid = s+(e-s)/2;
  return (cnt(2*idx,l,r,s,mid) + cnt(2*idx+1,l,r,mid+1,e));
}
  
ll query(ll idx,ll k,ll s,ll e) {
  if(k==0) return -1;
  
  if(tree[idx] < k) return -1;

  if(s==e) return s;

  ll mid = s+(e-s)/2;
  if(tree[idx*2] >= k) return query(idx*2,k,s,mid);
  k -= tree[idx*2];

  return query(idx*2ll+1,k,mid+1,e);
}
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n,q,i,t,k;
  cin >> n >> q;

  arr.resize(n);
  for(i=0; i<n; i++) cin >> arr[i];
  
  tree.resize(4ll*n+2,0);
  build(1,0,n-1);

  while(q--) {
    cin >> t >> i;
    if(t==1) {
      if(arr[i]==0) {
        arr[i]=1;
        update(1,i,arr[i],0,n-1);
      }
    } else {
      k = cnt(1,0,i-1,0,n-1);
      cout << query(1,k,0,n-1) << " ";
      k++;
      if(arr[i]) k++;

      cout << query(1,k,0,n-1) << "\n";
    }
  }
}