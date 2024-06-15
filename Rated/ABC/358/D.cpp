#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    rep(i, N) cin >> A.at(i);
    rep(i, M) cin >> B.at(i);

    sort(all(A));
    sort(all(B));

    int64_t sum = 0;
    int B_index = 0;
    rep(i, N){
        if(B.at(B_index) <= A.at(i)){
            sum += A.at(i);
            B_index++;
        }
        if(B_index == M) break;
    }

    cout << ((B_index == M) ? sum : -1) << endl;
}