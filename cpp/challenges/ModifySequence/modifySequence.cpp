#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int N;
  int a;
  int newElemt;
  
  cin >> N >> a;

  for(int i=0; i<N-1; i++) {
      cin >> newElemt;
      
      a = newElemt - a;
      
      if(a < 0)
          break;
  }
  
  if(!!a)
      cout << "NO" << endl;
  else
      cout << "YES" << endl;
}