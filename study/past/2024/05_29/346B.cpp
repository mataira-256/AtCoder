#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int W, B;
    cin >> W >> B;

    string piano = "wbwbwwbwbwbw";

    bool ok = false;
    rep(i, 12){
        int w_count = 0;
        int b_count = 0;
        rep(j, W+B){
            if(piano.at((i+j)%piano.size())=='w') w_count++;
            else b_count++;
        }
        if(w_count==W && b_count==B){
            ok = true;
            break;
        }
    }

    cout << (ok ? "Yes" : "No");
}