#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int Q;
    cin >> Q;

    vector<int> A;
    rep(i, Q){
        int q1, q2;
        cin >> q1 >> q2;
        if(q1 == 1){
            A.push_back(q2);
        }else{
            cout << A.at(A.size()-q2) << endl;
        }
    }
}