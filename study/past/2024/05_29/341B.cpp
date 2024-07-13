#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    cin >> N;

    vector<int64_t> A(N);
    rep(i, N)cin >> A.at(i);

    int S, T;
    rep(i, N-1){
        cin >> S >> T;
        A.at(i+1) += A.at(i) / S * T;
    }

    cout << A.at(N-1) << endl;
}