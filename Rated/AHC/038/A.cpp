#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(i); i++)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N, M, V;
    cin >> N >> M >> V;
    vector<vector<int>> grid(N, vector<int>(N));
    rep(i, N){
        string s;
        cin >> s;
    }


    /* solve */
    rep(i, N){
        rep(j, N-1){
            cout << grid.at(i).at(j) << ", ";
        }
        cout<< grid.at(i).at(N-1) << endl;
    }

}