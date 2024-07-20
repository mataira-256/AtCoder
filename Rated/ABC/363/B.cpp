#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N, T, P;
    cin >> N >> T >> P;
    vector<int> L(N);
    Arep(i, 0, N) cin >> L.at(i);

    /* solve */
    int ans;
    Arep(i, 0, 200){
        int count = 0;
        Arep(j, 0, N){
            if(L.at(j) + i >= T) count++;
        }

        if(count >= P){
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}