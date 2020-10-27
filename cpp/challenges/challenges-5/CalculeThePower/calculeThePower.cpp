#include <bits/stdc++.h>
#define mod (ll)1000000007

using namespace std;

typedef long long ll;

ll mpow(ll a, ll b) {
    ll ret = 1;
    while(b) {
        if(b & 1) ret = (ret * a) % mod;
        b >>= 1;
        a = (a * a) % mod;
    }
    return ret;
}

int main () {
    ll a, b;

    cin >> a >> b;

    cout << mpow(a, b) % mod << endl;
}