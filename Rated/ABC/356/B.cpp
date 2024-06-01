#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(M);
    vector<int> X(M);

    rep(i, M)cin >> A.at(i);

    int in_num;
    rep(i, N){
        rep(j, M){
            cin >> in_num;
            X.at(j) += in_num;
        }
    }

    bool ok = true;
    rep(i, M){
        if(X.at(i) < A.at(i)) ok = false;
    }

    cout << (ok ? "Yes" : "No") << endl;
}