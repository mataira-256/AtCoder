#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int64_t X;
    cin >> X;

    if(X > 0) X += 9;
    X /= 10;
    cout << X << endl;
}