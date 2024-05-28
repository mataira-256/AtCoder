#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    int ans = 1;

    cin >> S;

    for(int i = 1; i < S.size(); i+=2){
        if(S.at(i) == '+'){
            ans++;
        }else{
            ans--;
        }
    }

    cout << ans << endl;
}