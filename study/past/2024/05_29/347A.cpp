#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N, K;
    cin >> N >> K;

    int A;
    rep(i, N){
        cin >> A;
        if(A % K == 0) cout << A/K << " ";
    }
    cout<< endl;
}