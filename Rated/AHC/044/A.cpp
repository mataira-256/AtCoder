#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int N = 100;
int L = 500000; // ここは固定らしい

// 困った時の大域変数
vector<vector<int>> Tab(5, vector<int>(N)); // 0:元のindex, 1:T, 2:half_T, 3:a, 4:b


void ans(){ // 答えの出力用
    rep(i, N) rep(j, N){
        if(i == Tab.at(0).at(j)){
            cout << Tab.at(3).at(j) << " " << Tab.at(4).at(j) << endl;
            break;
        }
    }
}

void Tab_sort(){
    for(int i = 0; i < N-1; i++){   //Tabの中身をTを基準にソート
        for(int j = i; j < N-i-1; j++){
            if(Tab.at(1).at(j) < Tab.at(1).at(j+1)){
                swap(Tab.at(0).at(j), Tab.at(0).at(j+1));
                swap(Tab.at(1).at(j), Tab.at(1).at(j+1));
                swap(Tab.at(2).at(j), Tab.at(2).at(j+1));
                swap(Tab.at(3).at(j), Tab.at(3).at(j+1));
                swap(Tab.at(4).at(j), Tab.at(4).at(j+1));
            }
        }
    }
}

int main() {
    /* input */
    int nl;
    cin >> nl >> nl; // 入力されるNとLの受け皿、使わない
    vector<int> T(N);
    rep(i, N) cin >> T.at(i);

    /* solve */
    rep(i, N) Tab.at(0).at(i) = i; //Tabの中身を作っておく
    Tab.at(1) = T;
    rep(i, N) Tab.at(2).at(i) = Tab.at(1).at(i)/2;
    rep(i, N){
        Tab.at(3).at(i) = -1;
        Tab.at(4).at(i) = -1;
    }

    double buffer = 1.00;
    bool ok = false;
    while(!ok){ //全部のabに値が入ったら終わり
        Tab_sort();
        rep(i, N){
            if(Tab.at(3).at(i) == -1){ // a決め
                for(int j = N-1; j >= 0; j--){
                    if(Tab.at(1).at(j) <= 0) continue;
                    if(Tab.at(2).at(i) <= Tab.at(1).at(j)*buffer){
                        Tab.at(3).at(i) = Tab.at(0).at(j);
                        Tab.at(1).at(j) -= Tab.at(2).at(i);
                        break;
                    }
                }
            }
            if(Tab.at(4).at(i) == -1){ // b決め
                for(int j = N-1; j >= 0; j--){
                    if(Tab.at(1).at(j) <= 0) continue;
                    if(Tab.at(2).at(i) <= Tab.at(1).at(j)*buffer){
                        Tab.at(4).at(i) = Tab.at(0).at(j);
                        Tab.at(1).at(j) -= Tab.at(2).at(i);
                        break;
                    }
                }
            }
        }

        ok = true;
        rep(i, N) if(Tab.at(3).at(i) == -1 || Tab.at(4).at(i) == -1){
            ok = false;
            buffer += 0.01;
            break;
        }
    }

    ans();
}