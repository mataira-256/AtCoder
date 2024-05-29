#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    cin >> S;

    rep(i, S.size()){
        bool diff = true;
        rep(j, S.size()){
            if(i != j && S.at(i) == S.at(j))diff = false;
        }
        if(diff){
            cout << i+1 << endl;
            break;
        }
    }

}