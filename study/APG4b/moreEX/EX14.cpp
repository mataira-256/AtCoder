#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    cout << max(max(A, B), C) - min(min(A, B), C) << endl;
}