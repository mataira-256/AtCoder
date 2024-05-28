#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N, M;
    int A, B;
    
    cin >> N >> M;

    vector<vector<string>> board(N, vector<string>(N, "-"));

    rep(i, M){
        cin >> A >> B;
        board.at(A-1).at(B-1) = "o";
        board.at(B-1).at(A-1) = "x";
    }

    for(int i = 0; i < N; i++){
        cout << board.at(i).at(0);
        for(int j = 1; j < N; j++){
            cout << " " << board.at(i).at(j);
        }
        cout << endl;
    }

}