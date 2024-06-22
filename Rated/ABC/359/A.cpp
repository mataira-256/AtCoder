#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    rep(i, N) cin >> S.at(i);

    int ans = 0;
    rep(i, N) if(S.at(i) == "Takahashi") ans++;

    cout << ans << endl;
}