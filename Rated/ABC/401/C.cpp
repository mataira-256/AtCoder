#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N, K;
    cin >> N >> K;

    /* solve */
    const uint64_t mod = 1000000000;
    vector<uint64_t> A(N+1);
    rep(i, N+1){
        if(i < K) A.at(i) = 1;
        else if(i == K) A.at(i) = K;
        else{
            A.at(i) = A.at(i-1) * 2 % mod;
            A.at(i) = (A.at(i) + mod - A.at(i-K-1)) % mod;
        }
        A.at(i) %= mod;
    }

    cout << A.at(N) << endl;
}