#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N, L, R;

    cin >> N >> L >> R;

    vector<int> A(N);
    rep(i, N) A.at(i) =i+1;

    for(int i = 0; i <= (R - L)/2; i++)swap(A.at(L+i-1), A.at(R-i-1));

    rep(i, N) cout << A.at(i) << " ";
}