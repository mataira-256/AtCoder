#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i, N)cin >> A.at(i);

    rep(i, N-1)cout << A.at(i)*A.at(i+1) << " ";
    cout << endl;
}