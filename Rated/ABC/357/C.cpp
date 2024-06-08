#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    int pow3_N = 1;
    
    cin >> N;
    rep(i, N){
        pow3_N *= 3;
    }

    vector<vector<char>> ans(pow3_N, vector<char>(pow3_N, '#'));

    int level = 3;
    rep(i, N){
        rep(j, pow3_N){
            rep(k, pow3_N){
                if((j % level)/(level/3) == 1 && (k % level)/(level/3) == 1){
                    ans.at(j).at(k) = '.';
                }
            }
        }
        level *= 3;
    }






    rep(i, pow3_N){
        rep(j, pow3_N) cout << ans.at(i).at(j);
        cout << endl;
    }
}