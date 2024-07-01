#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    cin >> S;

    bool ok = false;

    if(S.at(0) == 'R' && (S.at(1) == 'M' || S.at(2) == 'M')){
        ok = true;
    }else if(S.at(1) == 'R' && S.at(2) == 'M'){
        ok = true;
    }
    

    cout << (ok ? "Yes" : "No") << endl;
}