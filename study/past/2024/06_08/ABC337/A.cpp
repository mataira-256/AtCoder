#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    int X, Y;
    int X_sum = 0, Y_sum = 0;

    cin >> N;
    rep(i, N){
        cin >> X >> Y;
        X_sum += X;
        Y_sum += Y;
    }

    if(X_sum > Y_sum){
        cout << "Takahashi" << endl;
    }else if(X_sum < Y_sum){
        cout << "Aoki" << endl;
    }else{
        cout << "Draw" << endl;
    }
}