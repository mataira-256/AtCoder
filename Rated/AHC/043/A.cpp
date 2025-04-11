#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int N = 50;
int T = 800; // この二つは固定らしいのでね

int main() {
    /* input */
    int M, K;
    cin >> N >> M >> K >> T; // NとTは同じ値が入り直すけどまあええやろ
    vector<int> is(M), js(M), it(M), jt(M);
    rep(i, M) cin >> is.at(i) >> js.at(i) >> it.at(i) >> jt.at(i);

    /* solve */
    rep(i, T) cout << -1 << endl;
}