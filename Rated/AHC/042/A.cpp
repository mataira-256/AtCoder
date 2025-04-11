#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

vector<vector<int>> grid(20, vector<int>(20, 0));

void L(int x, int count);
void R(int x, int count);
void U(int x, int count);
void D(int x, int count);
int check_direction(int y, int x);

int main() {
    /* input */
    int N;
    cin >> N; // 確定20らしいね
    vector<string> C(N);
    rep(i, N) cin >> C.at(i);

    /* solve */
    rep(i, N) rep(j, N){ // 文字列で操作するの好きじゃないから 鬼1 福2 何もない0でやる
        if(C.at(i).at(j) == 'x') grid.at(i).at(j) = 1;
        else if(C.at(i).at(j) == 'o') grid.at(i).at(j) = 2;
    }

    rep(i, N) rep(j, N){
        if(grid.at(i).at(j) == 1){
            int direction = check_direction(i, j);
            if(direction == 1){
                int count = j+1;
                L(i, count);
                R(i, count);
            }else if(direction == 2){
                int count = 20-j;
                R(i, count);
                L(i, count);
            }else if(direction == 3){
                int count = i+1;
                U(j, count);
                D(j, count);
            }else if(direction == 4){
                int count = 20-i;
                D(j, count);
                U(j, count);
            }
        }
    }
}

void L(int x, int count){
    rep(i, count)cout << "L " << x << endl;
}

void R(int x, int count){
    rep(i, count)cout << "R " << x << endl;
}

void U(int x, int count){
    rep(i, count)cout << "U " << x << endl;
}

void D(int x, int count){
    rep(i, count)cout << "D " << x << endl;
}

int check_direction(int y, int x){
    // 左1, 右2, 上3, 下4, どれもだめ0 を返す
    int left = x;
    int right = 19 - x;
    int up = y;
    int down = 19 - y;

    bool flag = true; // 左チェック
    for(int check_x = 0; check_x < x; check_x++){
        if(grid.at(y).at(check_x) == 2) flag = false;
    }
    if(!flag) left = 100;

    flag = true; // 右チェック
    for(int check_x = 19; x < check_x; check_x--){
        if(grid.at(y).at(check_x) == 2) flag = false;
    }
    if(!flag) right = 100;

    flag = true; // 上チェック
    for(int check_y = 0; check_y < y; check_y++){
        if(grid.at(check_y).at(x) == 2) flag = false;
    }
    if(!flag) up = 100;

    flag = true; // 下チェック
    for(int check_y = 19; y < check_y; check_y--){
        if(grid.at(check_y).at(x) == 2) flag = false;
    }
    if(!flag) down = 100;

    int min_direction = min(left, min(right, min(up, down))); // 返り値を決めた通りに返すためにややこしくやってるだけ
    if(min_direction == left) return 1;
    else if(min_direction == right) return 2;
    else if(min_direction == up) return 3;
    else return 4;

}