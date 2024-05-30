#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    cin >> S;

    bool ok = true;

    if('a' <= S.at(0) && S.at(0) <= 'z') ok = false;
    for(int i = 1; i< S.size(); i++){
        if('A' <= S.at(i) && S.at(i) <= 'Z') ok = false;
    }

    cout << (ok ? "Yes" : "No") << endl;
}