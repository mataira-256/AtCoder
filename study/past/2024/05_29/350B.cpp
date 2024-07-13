#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N, Q;
    int T;

    cin >> N >> Q;

    vector<int> teeth(N, 1);
    rep(i, Q){
        cin >> T;
        teeth.at(T-1)++;
        teeth.at(T-1) %= 2;
    }

    int ans = 0;
    rep(i, N) ans += teeth.at(i);
    cout << ans << endl;
}