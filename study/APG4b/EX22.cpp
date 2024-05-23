#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;

    cin >> N;

    vector<pair<int, int>> p(N);
    rep(i, N){
        int a, b;
        cin >> a >> b;
        p.at(i) = make_pair(b, a);
    }

    sort(p.begin(), p.end());

    rep(i, N){
        int a, b;
        tie(b, a) = p.at(i);
        cout << a << " " << b << endl;
    }
}