#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    cin >> S;

    vector<int> alp_count(26);
    for(char c : S){
        alp_count.at(c-'a')++;
    }

    int max_idx;
    int max_count = 0;
    rep(i, 26){
        if(alp_count.at(i) > max_count){
            max_count = alp_count.at(i);
            max_idx = i;
        }
    }

    cout << (char)(max_idx+'a') << endl;
}