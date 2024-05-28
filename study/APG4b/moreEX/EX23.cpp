#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;

    cin >> N;

    vector<int> A(N);
    map<int, int> num;
    rep(i, N){
        cin >> A.at(i);
        if(num.count(A.at(i))) num.at(A.at(i))++;
        else num[A.at(i)] = 1;
    }

    int max_key = A.at(0);
    int max_value = num.at(A.at(0));
    for(int e : A){
        if(num.at(e) > max_value){
            max_key = e;
            max_value = num.at(e);
        }
    }

    cout << max_key << " " << max_value << endl;
}