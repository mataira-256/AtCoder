#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    cin >> S;

    int index1=-1;
    int index2=-1;

    for(int i = 0; i < S.size(); i++){
        if(S.at(i) == '|'){
            if(index1 == -1) index1 = i;
            else index2 = i;
        }
    }
    // cout << index1 << " " << index2 << endl;

    cout << S.substr(0, index1) << S.substr(index2+1, S.size()-index2-1) << endl;
}