#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool ordem(pair<string, int> a, pair<string, int> b){
  return a.second < b.second;
}

int inversoes(string x){
  int count = 0, tam = x.size();

  for(int i=0; i < (tam-1); i++)
    for(int j=i+1; j < tam; j++)
      if(x[i]>x[j]) count++;

  return count;
}

int main() {
  vector< pair<string, int> > dnaInversion;
  int n, m, i;
  
  cin >> n >> m;
  
  for(i=0; i<m; i++){
    string x;
    int inversion;
    
    cin >> x;
    inversion = inversoes(x);
    dnaInversion.push_back(make_pair(x, inversion));
  }

  sort(dnaInversion.begin(), dnaInversion.begin()+m, ordem);

  for(i=0; i<m; i++) cout << dnaInversion[i].first << endl;

  return 0;
}