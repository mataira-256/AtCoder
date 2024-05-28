#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    int sum = 0;

    cin >> N;

    vector<int> A(N);

    rep(i, N){
        cin >> A.at(i);
        sum += A.at(i);
    }

    rep(i, N){
        cout << abs(A.at(i)-sum/N) << endl;
    }

}