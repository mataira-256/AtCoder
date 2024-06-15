#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N, A;
    vector<int> T(105);
    int now = 0;

    cin >> N >> A;
    rep(i, N) cin >> T.at(i);

    rep(i, N){
        if(now >= T.at(i)){
            now += A;
        }else{
            now = T.at(i) + A;
        }
        cout << now << endl;
    }
}