#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int a, b, c, d, e, f;
    int g, h, i, j, k, l;
    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;

    /* solve */
    bool ok = false;

    if((max(a, g) < min(d, j))&&
       (max(b, h) < min(e, k))&&
       (max(c, i) < min(f, l))) ok = true;

    cout << (ok ? "Yes" : "No") << endl;
}