#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N, K;
    cin >> N >> K;
    vector<char> S(N);
    Arep(i, 0, N) cin >> S.at(i);

    /* solve */
    int ans = 0;
    sort(all(S));

    do{
        bool ok2 = true;
        Arep(i, 0, N-K+1){
            bool ok = true;
            Arep(j, 0, K/2){
                if(S.at(i+j) != S.at(i+K-1-j)) ok = false;
            }
            if(ok) ok2 = false;
        }
        if(ok2) ans++;
    }while(next_permutation(all(S)));

    cout << ans << endl;
}