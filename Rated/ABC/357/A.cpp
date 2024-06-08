#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N, M;
    vector<int> H(105);
    int ans = 0;

    cin >> N >> M;
    rep(i, N) cin >> H.at(i);

    rep(i, N){
        if(M >= H.at(i)){
            ans++;
            M -= H.at(i);
        }else break;
    }

    cout << ans << endl;
}