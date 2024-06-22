#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int64_t Sx, Sy;
    int64_t Tx, Ty;
    cin >> Sx >> Sy >> Tx >> Ty;

    Sx = Sy%2==0 ? Sx/2*2 : (Sx-1)/2*2+1;
    Tx = Ty%2==0 ? Tx/2*2 : (Tx-1)/2*2+1;
    int64_t ans;

    int64_t x_dis = abs(Sx - Tx);
    int64_t y_dis = abs(Sy - Ty);
    ans = y_dis;
    if(x_dis > y_dis) ans += (x_dis - y_dis +1) /2;

    cout << ans << endl;
}