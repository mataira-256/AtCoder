#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    cin >> S;

    int point_idx;
    for(int i = S.size()-1; i >= 0; i--){
        if(S.at(i) == '.'){
            point_idx = i;
            break;
        }
    }

    cout << S.substr(point_idx+1) << endl;
}