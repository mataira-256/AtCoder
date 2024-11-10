#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int Y;
    cin >> Y;

    /* solve */
    if(Y % 4 != 0) cout << 365;
    else if(Y%100 != 0) cout << 366;
    else if(Y%400 != 0) cout << 365;
    else cout << 366;

}