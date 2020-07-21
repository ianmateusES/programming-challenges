#include <iostream>
#include <string>

using namespace std;

int main() {
  string x;
  int v[27], max = 0;

  for(int i=0; i<26; i++) v[i] = 0;

  for(int i=0; i<4; i++){
    getline(cin, x);
    for(int j = 0; j<x.length(); j++) {
      int pos = (int) x[j]-65;
      if(pos>=0 && pos<=25){
        v[pos]++;
        if(v[pos]>max) max=v[pos];
      } 
    }
  }

  for(int i=max; i>0; i--){
    for(int j=0; j<26; j++){
      if(v[j]==i){
        cout << "* ";
        v[j]--;
      } else cout<<"  ";
    } 
    cout << endl;
  }
  
  for(int i=0; i<26; i++) cout << (char) (i+65) << " ";
  cout << endl;

  return 0;
}