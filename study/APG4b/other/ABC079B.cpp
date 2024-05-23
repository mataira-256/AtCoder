#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    vector<int64_t> luca(N+1);

    luca.at(0) = 2;
    luca.at(1) = 1;
    for(int i = 2; i <= N; i++){
        luca.at(i) = luca.at(i-2)+luca.at(i-1);
    }

    cout << luca.at(N) << endl;
}