#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;

    cin >> S;

    rep(i, S.size()-1) cout << S.at(i);
    cout << '4' << endl;
}