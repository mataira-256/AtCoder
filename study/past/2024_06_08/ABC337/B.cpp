#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    cin >> S;
    bool ok = true;

    int x = 0;
    rep(i, S.size()){
        if(S.at(i) == 'A'){
            if(x <= 1) x = 1;
            else{
                ok = false;
                break;
            }
        }else if(S.at(i) == 'B'){
            if(x <= 2) x = 2;
            else{
                ok = false;
                break;
            }
        }else if(S.at(i) == 'C'){
            if(x <= 3) x = 3;
            else{
                ok = false;
                break;
            }
        }else{
            ok = false;
            break;
        }
    }


    cout << (ok ? "Yes" : "No") << endl;
}