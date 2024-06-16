#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

bool flat(vector<vector<int>> &grid);
void move(vector<int> &pos);
void up(vector<int> &pos);
void down(vector<int> &pos);
void left(vector<int> &pos);
void right(vector<int> &pos);
void dumping(int &dump, vector<int> &pos, vector<vector<int>> &grid);

int main() {
    int N;
    cin >> N;
    vector<vector<int>> grid(20, vector<int>(20));
    rep(i, N)rep(j, N) cin >> grid.at(i).at(j);

    int dump = 0;
    vector<int> pos(2);
    while(!flat(grid)){
        dumping(dump, pos, grid);
        move(pos);
    }
}

bool flat(vector<vector<int>> &grid){
    rep(i, 20)rep(j, 20) if(grid.at(i).at(j) != 0) return false;
    return true;
}

void move(vector<int> &pos){
    if(pos.at(1) == 0){ // 左端列
        if(pos.at(0) == 0) right(pos);
        else up(pos);
    }else if(pos.at(0) == 19){ // 下端行
        left(pos);
    }else if(pos.at(0)%2 == 0){ // 偶数列
        if(pos.at(1) == 19) down(pos);
        else right(pos);
    }else{ // 奇数列
        if(pos.at(1) == 1) down(pos);
        else left(pos);
    }
}

void up(vector<int> &pos){
    cout << "U" << endl;
    pos.at(0)--;
}

void down(vector<int> &pos){
    cout << "D" << endl;
    pos.at(0)++;
}

void left(vector<int> &pos){
    cout << "L" << endl;
    pos.at(1)--;
}

void right(vector<int> &pos){
    cout << "R" << endl;
    pos.at(1)++;
}

void dumping(int &dump, vector<int> &pos, vector<vector<int>> &grid){
    int soil = grid.at(pos.at(0)).at(pos.at(1));

    if(soil == 0) return;

    if(dump + soil >= 0){
        if(soil > 0) cout << "+";
        cout << soil << endl;
        dump += soil;
        soil = 0;
    }else if(dump > 0){
        cout << "-" << dump << endl;
        soil += dump;
        dump = 0;
    }

    grid.at(pos.at(0)).at(pos.at(1)) = soil;
}