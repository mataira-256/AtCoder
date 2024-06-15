#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;

    cin >> N;

    rep(i, N+1) rep(j, N+1) rep(k, N+1){
        if(i+j+k <= N){
            cout << i << " " << j << " " << k << endl;
        }
    }
}