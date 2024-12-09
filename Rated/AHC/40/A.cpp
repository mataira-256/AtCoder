#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

void solve(vector<vector<int64_t>> dw, int N);

int main() {
    /* input */
    int N, T, sigma;
    cin >> N >> T >> sigma;
    vector<int64_t> w(N), h(N);
    rep(i, N) cin >> w.at(i) >> h.at(i);

    /* solve */
    // Tの回数分「標準偏差から真の大きさを予測しながら回答」を同じアルゴリズムを使って回答し、いい感じに噛み合うことを祈る
    rep(turn, T){
        /* 絶対に全部おく */
        cout << N << endl;


        /* 真の値の予測 */
        vector<vector<int64_t>> dw(N, vector<int64_t>(4));
        rep(i, N){
            dw.at(i).at(0) = 0; // 角度変えたかの情報
            dw.at(i).at(1) = w.at(i); // 横幅
            dw.at(i).at(2) = h.at(i); // 縦幅
        }

        // 乱数生成器の準備
        random_device rd;
        mt19937 gen(rd());
        normal_distribution<double> dist(0, sigma);

        // 標準偏差から生成した乱数分ズラす
        rep(i, N){
            dw.at(i).at(1) += (int64_t)(dist(gen)+0.5);
            dw.at(i).at(2) += (int64_t)(dist(gen)+0.5);
        }


        /* 本体 */
        solve(dw, N);


        // 配置の幅は使う気がないので、入力受け取るだけ受け取って終わり
        int W, H;
        cin >> W >> H;
    }

}

void solve(vector<vector<int64_t>> dw, int N){
    rep(i, N){  // 横幅 > 縦幅を作る
        if(dw.at(i).at(1) < dw.at(i).at(2)){
            swap(dw.at(i).at(1), dw.at(i).at(2));
            dw.at(i).at(0) = 1;
        }
    }

    rep(i, N) cout << i << " " << dw.at(i).at(0) << " U -1" << endl;
}