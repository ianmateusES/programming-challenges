#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string x;

  cin >> n;

  for(; n>0; n--){
    cin >> x;
    int tam = x.length();
    if(!x.compare("1") or !x.compare("4") or !x.compare("78")) cout << "+" << endl;
    else if(x[tam-2] == '3' and x[tam-1] == '5') cout << "-" << endl;
    else if(x[0] == '9' and x[tam-1] == '4') cout << "*" << endl;
    else cout << "?" << endl;
  }

  return 0;
}