#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S, T;
    cin >> S >> T;

    bool ok = false;
    for(int w = 1; w < S.size(); w++){
        for(int c = 0; c < w; c ++){
            string sub_S = "";
            for(int i = 0 ; i < S.size()/w; i++){
                sub_S += S.at(i*w+c);
            }
            if(sub_S == T) ok = true;
        }
    }

    cout << (ok ? "Yes" : "No") << endl;
}