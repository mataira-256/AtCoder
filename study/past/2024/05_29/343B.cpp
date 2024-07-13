#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N));
    rep(i, N)rep(j, N)cin >> A.at(i).at(j);

    rep(i, N){
        rep(j, N){
        if(A.at(j).at(i) == 1) cout << j+1 << " ";
        }
        cout << endl;
    }
}