#include<iostream>
#include<algorithm>

using namespace std;

int main() {
  int t, n, i, v[100];

  cin >> t;
  
  for(; t>0; t--) {
    cin >> n;
    
    int sum = 0;
    
    for(i=0; i<n; i++) cin >> v[i];
    
    sort(v,v+n);
    
    for(i=1; i<n; i++) sum += v[i]-v[i-1];

    sum += v[n-1]-v[0];

    cout << sum << endl;
  }

  return 0;
}