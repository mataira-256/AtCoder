#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int summit_num = 0;
vector<vector<int>> pos(0, vector<int>(2));

void appendPos(int x, int y);

int main() {
    /* input */
    int N;
    cin >> N;
    vector<vector<int>> saba(N, vector<int>(2)), iwashi(N, vector<int>(2));
    rep(i, N) cin >> saba.at(i).at(0) >> saba.at(i).at(1);
    rep(i, N) cin >> iwashi.at(i).at(0) >> iwashi.at(i).at(1);

    /* solve */
    // M*Mを1ブロックとして考えて取るかどうか決める
    int size = 100000;
    int M = 10000;
    vector<vector<int>> tmp(size/M, vector<int>(size/M));
    rep(i, N) tmp.at(saba.at(i).at(0)/M).at(saba.at(i).at(1)/M)++;
    rep(i, N) tmp.at(iwashi.at(i).at(0)/M).at(iwashi.at(i).at(1)/M)--;

    vector<vector<bool>> block(size/M, vector<bool>(size/M));
    rep(i, size/M) rep(j, size/M) if(tmp.at(i).at(j) > 0) block.at(i).at(j) = true;

    int max_point = tmp.at(0).at(0);
    int max_x = 0, max_y = 0;
    rep(i, size/M) rep(j, size/M){
        if(tmp.at(i).at(j) > max_point){
            max_point = tmp.at(i).at(j);
            max_x = i;
            max_y = j;
        }
    }

    //左上
    appendPos((max_x)*M-1, (max_y)*M);
    if(block.at(max_x-1).at(max_y-1)){
        appendPos((max_x-1)*M, (max_y)*M);
        appendPos((max_x-1)*M, (max_y-1)*M);
        appendPos((max_x)*M-1, (max_y-1)*M);
    }
    appendPos((max_x)*M-1, (max_y)*M-1);

    //上
    appendPos((max_x)*M, (max_y)*M-1);
    if(block.at(max_x).at(max_y-1)){
        appendPos((max_x)*M, (max_y-1)*M);
        appendPos((max_x+1)*M-2, (max_y-1)*M);
    }
    appendPos((max_x+1)*M-2, (max_y)*M-1);

    //右上
    appendPos((max_x+1)*M-1, (max_y)*M-1);
    if(block.at(max_x+1).at(max_y-1)){
        appendPos((max_x+1)*M-1, (max_y-1)*M);
        appendPos((max_x+2)*M-1, (max_y-1)*M);
        appendPos((max_x+2)*M-1, (max_y)*M-1);
    }
    appendPos((max_x+1)*M, (max_y)*M-1);

    //右
    appendPos((max_x+1)*M, (max_y)*M);
    if(block.at(max_x+1).at(max_y)){
        appendPos((max_x+2)*M-1, (max_y)*M);
        appendPos((max_x+2)*M-1, (max_y+1)*M-2);
    }
    appendPos((max_x+1)*M, (max_y+1)*M-2);

    //右下
    appendPos((max_x+1)*M, (max_y+1)*M-1);
    if(block.at(max_x+1).at(max_y+1)){
        appendPos((max_x+2)*M-1, (max_y+1)*M-1);
        appendPos((max_x+2)*M-1, (max_y+2)*M-1);
        appendPos((max_x+1)*M, (max_y+2)*M-1);
    }
    appendPos((max_x+1)*M, (max_y+1)*M);

    //下
    appendPos((max_x+1)*M-1, (max_y+1)*M);
    if(block.at(max_x).at(max_y+1)){
        appendPos((max_x+1)*M-1, (max_y+2)*M-1);
        appendPos((max_x)*M+1, (max_y+2)*M-1);
    }
    appendPos((max_x)*M+1, (max_y+1)*M);

    //左下
    appendPos((max_x)*M, (max_y+1)*M);
    if(block.at(max_x-1).at(max_y+1)){
        appendPos((max_x)*M, (max_y+2)*M-1);
        appendPos((max_x-1)*M, (max_y+2)*M-1);
        appendPos((max_x-1)*M, (max_y+1)*M);
    }
    appendPos((max_x)*M-1, (max_y+1)*M);

    //左
    appendPos((max_x)*M-1, (max_y+1)*M-1);
    if(block.at(max_x-1).at(max_y)){
        appendPos((max_x-1)*M, (max_y+1)*M-1);
        appendPos((max_x-1)*M, (max_y)*M+1);
    }
    appendPos((max_x)*M-1, (max_y)*M+1);

    cout << summit_num << endl;
    rep(i, pos.size()){
        cout << pos.at(i).at(0) << " " << pos.at(i).at(1) << endl;
    }

}

void appendPos(int x, int y){
    vector<int> tmp(2);
    tmp.at(0) = x;
    tmp.at(1) = y;
    pos.push_back(tmp);
    summit_num++;
}