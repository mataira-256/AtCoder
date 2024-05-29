#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N, Q;
    cin >> N;
    
    vector<int> P(N);
    rep(i, N) cin >> P.at(i);

    cin >> Q;
    vector<int> A(Q);
    vector<int> B(Q);
    rep(i, Q) cin >> A.at(i) >> B.at(i);

    rep(i, Q){
        rep(j, N){
            if(P.at(j) == A.at(i)){
                cout << A.at(i) << endl;
                break;
            }else if(P.at(j) == B.at(i)){
                cout << B.at(i) << endl;
                break;
            }
        }
    }
}