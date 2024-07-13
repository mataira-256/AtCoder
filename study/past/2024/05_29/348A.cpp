#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) cout << (i%3 ==0 ? "x" : "o");
    cout << endl;
}