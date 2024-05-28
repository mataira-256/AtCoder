#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    int A, B;
    string op;

    cin >> N >> A;

    rep(i, N){
        cin >> op >> B;
        if(op == "+"){
            A += B;
        }else if(op == "-"){
            A -= B;
        }else if(op == "*"){
            A *= B;
        }else if(op == "/"){
            if(B == 0){
                cout << "error" << endl;
                break;
            }
            A /= B;
        }
        cout << i+1 << ":" << A << endl;
    }
}