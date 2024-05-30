#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int A, B, D;
    cin >> A >> B >> D;

    for(int i = A; i <= B; i += D){
        cout << i << " ";
    }
    cout << endl;
}