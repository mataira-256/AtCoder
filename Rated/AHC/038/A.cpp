#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

void makeGrid(vector<vector<int>> &grid, int &N, vector<string> &s, vector<string> &t);
bool isComplete(vector<vector<int>> &grid, int &N);
void move(vector<vector<int>> &grid, int &N, vector<int> &pos, bool &haveTakoyaki);

int main() {
    /* input */
    int N, M, V;
    cin >> N >> M >> V;
    vector<string> s(N), t(N);
    rep(i, N) cin >> s.at(i);
    rep(i, N) cin >> t.at(i);


    /* solve */
    // gridを作る(0: 何もない, 1: たこやきがある, 2: 目的地, 3: 目的地かつたこやきがある)
    vector<vector<int>> grid(N, vector<int>(N));
    makeGrid(grid, N, s, t);

    //1回目の出力 & pos(y, x)の作成,初期位置
    vector<int> pos(2);
    cout << 1 << endl;
    rep(i, N){
        bool posOK = false;
        rep(j, N){
            if(grid.at(i).at(j) == 1){
                grid.at(i).at(j)--;
                pos.at(0) = i;
                pos.at(1) = j;
                posOK = true;
                cout << i << " " << j << endl;
                cout << ".P" << endl;
                break;
            }
        }
        if(posOK) break;
    }
    bool haveTakoyaki = true;

    while(!isComplete(grid, N)){
        move(grid, N, pos, haveTakoyaki);
    }
}

void makeGrid(vector<vector<int>> &grid, int &N, vector<string> &s, vector<string> &t){
    rep(i, N) rep(j, N){
        grid.at(i).at(j) = int(s.at(i).at(j) - '0') + int(t.at(i).at(j) - '0') * 2;
    }
}

bool isComplete(vector<vector<int>> &grid, int &N){
    rep(i, N) rep(j, N){
        if(grid.at(i).at(j) == 2) return false;
    }
    return true;
}

void move(vector<vector<int>> &grid, int &N, vector<int> &pos, bool &haveTakoyaki){
    int t = haveTakoyaki ? 2 : 1; // たこやきを持っているかでターゲットを変える

    // 1番近いターゲットを探す
    vector<int> tPos(2);
    int minDis = 10000;
    rep(i, N)rep(j, N){
        if(grid.at(i).at(j) == t){
            int dis = abs(pos.at(0) - i) + abs(pos.at(1) - j);
            if(dis < minDis){
                minDis = dis;
                tPos.at(0) = i;
                tPos.at(1) = j;
            }
        }
    }

    // ターゲットに向かって移動し、それに応じた出力
    while(true){
        // 1文字目(移動)
        if(pos.at(0) < tPos.at(0)){ // ターゲットより上
            cout << "D";
            pos.at(0)++;
        }else if(pos.at(0) > tPos.at(0)){ // ターゲットより下
            cout << "U";
            pos.at(0)--;
        }else if(pos.at(1) < tPos.at(1)){ // ターゲットより左
            cout << "R";
            pos.at(1)++;
        }else{ // ターゲットより右
            cout << "L";
            pos.at(1)--;
        }

        // 2文字目(P)
        if(pos.at(0) == tPos.at(0) && pos.at(1) == tPos.at(1)){
            cout<< "P" << endl;
            grid.at(pos.at(0)).at(pos.at(1)) += haveTakoyaki ? 1 : -1;
            break;
        }else{
            cout << "." << endl;
        }
    }

    haveTakoyaki = !haveTakoyaki; // 使い終わったから反転しておく
}