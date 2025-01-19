#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

vector<vector<int>> G(1000);
vector<int> parent(1000, -2);
vector<int> deepness(1000, 0);

void dfs(int visit, int parent_index);

int main() {
    /* input */
    int N, M, H;
    cin >> N >> M >> H;
    vector<int> A(N);
    rep(i, N) cin >> A.at(i);
    vector<int> u(M), v(M);
    rep(i, M) cin >> u.at(i) >> v.at(i);
    vector<int> x(N), y(M);
    rep(i, N) cin >> x.at(i) >> y.at(i);

    /* solve */
    // 残ってる物の中で一番美しくないやつをrootにしてdfs
    rep(i, M){   // まずグラフ作っておく
        G.at(u.at(i)).push_back(v.at(i));
        G.at(v.at(i)).push_back(u.at(i));
    }

    rep(i, N){   // 汚い順にソートしておく(根の近さと汚さにある程度相関持たせられるはず)
        vector<int> smallG = G.at(i);
    
        for(int j = 0; j < smallG.size() - 1; j++){
            for(int k = 0; k < smallG.size() - j - 1; k++){
                if(A.at(smallG.at(k)) > A.at(smallG.at(k+1))) swap(smallG.at(k), smallG.at(k+1));
            }
        }

        G.at(i) = smallG;
    }

    bool completed = false;
    while(!completed){
        // 一番汚いやつ探し
        int dirtest;
        int dirtest_index;
        rep(i, N){
            if(parent.at(i) == -2){
                dirtest = A.at(i);
                dirtest_index = i;
                break;
            }
        }

        rep(i, N){
            if(parent.at(i) != -2) continue;
            if(dirtest > A.at(i)){
                dirtest = A.at(i);
                dirtest_index = i;
            }
        }

        // 探した物でdfs
        dfs(dirtest_index, -1);

        // 全部終わったかチェック
        completed = true;
        rep(i, N){
            if(parent.at(i) == -2){
                completed = false;
                break;
            }
        }
    }

    rep(i, N) cout << (parent.at(i) != -2 ? parent.at(i) : -1) << " ";
}

void dfs(int visit, int parent_index){
    if(parent_index == -1){ // 訪れたところの深さと親を設定
        parent.at(visit) = -1;
        deepness.at(visit) = 0;
    }else{
        parent.at(visit) = parent_index;
        deepness.at(visit) = deepness.at(parent_index) + 1;
    }

    if(deepness.at(visit) == 10) return; // 深さがすでに10ならそれ以降行かないのでおわり

    for(int next_visit : G.at(visit)){
        if(parent.at(next_visit) != -2) continue;   // すでに親がある(訪れてる)なら飛ばす
        dfs(next_visit, visit);
    }

}