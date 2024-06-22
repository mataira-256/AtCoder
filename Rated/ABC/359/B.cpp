#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    cin >> N;
    vector<int> A(2*N);
    rep(i, 2*N) cin >> A.at(i);

    int ans = 0;
    for(int i = 0; i < 2*N-2; i++){
        if(A.at(i) == A.at(i+2)) ans++;
    }

    cout << ans << endl;
}