#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    int ans = 0;

    cin >> N;

    while(true){
        if(N%2==0){
            N /= 2;
            ans++;
        }else break;
    }

    cout << ans << endl;
}