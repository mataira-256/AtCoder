#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    vector<vector<bool>> grid (H, vector<bool>(W));

    int x = 0, y = 0;
    int direction = 0;
    rep(i, N){
        if(!grid.at(y).at(x)) direction++;
        else direction--;
        direction = (direction+4)%4;

        grid.at(y).at(x) = !grid.at(y).at(x);

        switch(direction){
        case 0:
            y = (y-1+H)%H;
            break;
        case 1:
            x = (x+1)%W;
            break;
        case 2:
            y = (y+1)%H;
            break;
        case 3:
            x = (x-1+W)%W;
            break;
        }

    }

    rep(i, H){
        rep(j, W){
            cout << (grid.at(i).at(j) ? '#' : '.');
        }
        cout << endl;
    }
}