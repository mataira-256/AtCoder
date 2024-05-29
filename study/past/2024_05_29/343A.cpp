#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int A, B;
    cin >> A >> B;
    for(int i = 0; i <= 9; i++){
        if(i != A+B){
            cout << i << endl;
            break;
        }
    }
}