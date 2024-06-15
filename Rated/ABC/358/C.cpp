#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N, M;
    char S;
    vector<bitset<10>> bit_pop(10);
    int ans;

    cin >> N >> M;
    rep(i, N)rep(j, M){
        cin >> S;
        if(S == 'o') bit_pop.at(i).set(j);
        else bit_pop.at(i).reset(j);
    }

    ans = N;
    for(int tmp = 0; tmp < (1<<N); tmp++){
        bitset<10> bit(tmp);

        bitset<10> bit_tmp = 0;
        rep(i, N){
            if(bit.test(i)){
                bit_tmp = bit_tmp | bit_pop.at(i);
            }
        }

        if(bit_tmp.count() == M){
            int bit_count = bit.count();
            ans = min(ans, bit_count);
        }
    }

    cout << ans << endl;
}