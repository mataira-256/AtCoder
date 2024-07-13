#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;
    vector<int> alp_count(26);

    cin >> S;

    for(char c : S) alp_count.at(c-'a')++;

    vector<int> count_count(S.size()+1);
    for(int i = 0; i < 26; i++) count_count.at(alp_count.at(i))++;

    bool ok = true;
    for(int i = 1; i <= S.size(); i++) ok &= count_count.at(i) == 0 || count_count.at(i) == 2;

    cout << (ok ? "Yes" : "No") << endl;
}