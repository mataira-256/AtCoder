#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int H, W;

    cin >> H >> W;

    vector<vector<char>> grid(H, vector<char>(W));
    vector<bool> have_black_y(H, false);
    vector<bool> have_black_x(W, false);

    rep(i, H) rep(j, W) cin >> grid.at(i).at(j);

    rep(i, H) rep(j, W){
        if(grid.at(i).at(j) == '#'){
            have_black_y.at(i) = true;
            have_black_x.at(j) = true;
        }
    }

    rep(i, H){
        if(have_black_y.at(i) == true){
            rep(j, W){
                if(have_black_x.at(j) == true){
                    cout << grid.at(i).at(j);
                }
            }
            cout << endl;
        }
    }

}