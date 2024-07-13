#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N, L;
    cin >> N >> L;
    vector<int> A(N);
    Arep(i, 0, N) cin >> A.at(i);

    /* solve */
    int ans = 0;
    Arep(i, 0, N) if(A.at(i) >= L) ans++;

    cout << ans << endl;
}