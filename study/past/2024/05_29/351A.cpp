#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int ans = 1;
    int in ;

    rep(i, 9){
        cin >> in;
        ans += in;
    }
    rep(i, 8){
        cin >> in;
        ans -= in;
    }

    cout << ans << endl;
}