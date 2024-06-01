#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int64_t N, M;
    int mod = 998244353;
    cin >> N >> M;

    vector<int64_t> bit(60);
    int64_t pow2 = 2;
    rep(i, 60){
        bit.at(i) = N / pow2;
        pow2 *= 2;
    }

    int64_t ans = 0;
    rep(i, 60){
        if(M % 2 == 1){
            ans += bit.at(i);
            ans %= mod;
        }
        M /= 2;
    }

    cout << ans << endl;
}