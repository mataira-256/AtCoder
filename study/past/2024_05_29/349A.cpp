#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    int A;
    int ans = 0;

    cin >> N;

    rep(i, N-1){
        cin >> A;
        ans -= A;
    }

    cout << ans << endl;

}