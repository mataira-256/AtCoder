#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {

    vector<int> bit_count(4);
    for(int tmp = 0; tmp < (1<<4); tmp++){
        bitset<4> bit(tmp);

        rep(i, 4) if(bit.test(i)) bit_count.at(i)++;

        if(tmp <= 9) cout << " ";
        cout << tmp << ": " << bit << "  ";
        rep(i, 4) cout << bit_count.at(3-i);
        cout << endl;
    }
}