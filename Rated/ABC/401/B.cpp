#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N;
    cin >> N;
    vector<string> S(N);
    rep(i, N) cin >> S.at(i);

    /* solve */
    int count = 0;
    bool logined = false;
    rep(i, N){
        if(S.at(i) == "private" && !logined) count++;
        else if(S.at(i) == "login") logined = true;
        else if(S.at(i) == "logout") logined = false;
    }

    cout << count;
}