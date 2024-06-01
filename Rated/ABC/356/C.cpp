#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N, M, K;
    vector<int> C(105);
    vector<vector<int>> A (105, vector<int>(105));
    vector<bool> R (105);

    cin >> N >> M >> K;
    rep(i, M){
        cin >> C.at(i);
        rep(j, C.at(i)) cin >> A.at(i).at(j);
        char r;
        cin >> r;
        R.at(i) = r == 'o' ? true : false;
    }

    int ans = 0;
    for(int tmp = 0; tmp < (1 << N); tmp++){
        bitset<15> bit(tmp);

        bool ok = true;
        rep(i, M){
            int correct_key = 0;
            rep(j, C.at(i)){
                if(bit.test(A.at(i).at(j)-1)) correct_key++;
            }
            if((correct_key >= K) != R.at(i)){
                ok = false;
                break;
            }
        }
        if(ok) ans++;
    }

    cout << ans << endl;
}