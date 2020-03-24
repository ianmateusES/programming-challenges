#include <iostream>

using namespace std;

int sumDigit(int n) {
  int resul = 0;
  while(n > 9){
    resul += n%10;
    n = n/10;
  }

  resul += n;
  if(resul > 9) return sumDigit(resul);
  return resul;
}

int main(){ 
  int n, m;

  cin >> n;
  
  while(n != 0){
    m = sumDigit(n);
    cout << m << endl;
    cin >> n;
  }

  return 0;
}