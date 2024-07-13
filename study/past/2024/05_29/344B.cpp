#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    vector<int> A(100);
    int i = 0;

    cin >> A.at(0);
    while(A.at(i) != 0){
        i++;
        cin >> A.at(i);
    }

    for(int j = i; j >= 0; j--) cout << A.at(j) << endl;
}