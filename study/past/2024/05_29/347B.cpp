#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    cin >> S;

    set<string> st;
    for(int i = 0; i < S.size(); i++){
        for(int j = S.size()-i; j >= 1; j--){
            st.insert(S.substr(i, j));
        }
    }
    cout << st.size() << endl;
}