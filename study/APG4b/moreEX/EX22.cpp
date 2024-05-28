#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;

    cin >> N;

    vector<pair<int, int>> p(N);

    rep(i, N) cin >> p.at(i).second >> p.at(i).first;

    sort(all(p));

    rep(i, N) cout << p.at(i).second << " " << p.at(i).first << endl;
}