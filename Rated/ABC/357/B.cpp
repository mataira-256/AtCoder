#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    
    cin >> S;

    int up_count = 0, low_count = 0;
    rep(i, S.size()){
        if('a' <= S.at(i) && S.at(i) <= 'z')low_count++;
        else up_count++;
    }

    if(up_count > low_count){
        rep(i, S.size()){
            S.at(i) = toupper(S.at(i));
        }
    }else{
        rep(i, S.size()){
            S.at(i) = tolower(S.at(i));
        }
    }

    cout << S << endl;
}