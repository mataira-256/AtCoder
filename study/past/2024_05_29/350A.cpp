#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    string S;

    cin >> S;

	int num=stoi(S.substr(3));

    if((1 <= num && num <= 349) && num != 316) cout << "Yes" << endl;
    else cout << "No" << endl;
}