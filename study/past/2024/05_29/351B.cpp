#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;

    cin >> N;

    vector<vector<char>> A(N, vector<char>(N));
    vector<vector<char>> B(N, vector<char>(N));

    rep(i, N)rep(j, N) cin >> A.at(i).at(j);
    rep(i, N)rep(j, N) cin >> B.at(i).at(j);

    rep(i, N)rep(j, N){
        if(A.at(i).at(j) != B.at(i).at(j)){
            cout << i+1 << " " << j+1 << endl;
            break;
        }
    };

}