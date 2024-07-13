#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int pow(int n){
    return n*n;
}

int main() {
    /* input */
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    /* solve */
    bool ok = false;
    int ABpow = pow(xb-xa) + pow(yb-ya);
    int BCpow = pow(xc-xb) + pow(yc-yb);
    int CApow = pow(xc-xa) + pow(yc-ya);

    if(ABpow + BCpow == CApow) ok = true;
    if(ABpow + CApow == BCpow) ok = true;
    if(BCpow + CApow == ABpow) ok = true;

    cout << (ok ? "Yes" : "No") << endl;
}