#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S, T;
    bool ok = false;

    cin >> S >> T;
    
    if(S == "AtCoder" && T == "Land") ok = true;

    cout << (ok ? "Yes" : "No") << endl;
}