#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    cin >> S;

    bool ok = true;
    for(int i = 1; i < S.size()-1; i++) ok &= S.at(i) == '=';
    ok &= (S.at(0) == '<' && S.at(S.size()-1) == '>');
    cout << (ok ? "Yes" : "No") << endl; 
}