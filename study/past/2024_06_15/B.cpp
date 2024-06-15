#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int64_t A, M, L, R;
    int64_t ans = 0;

    cin >> A >> M >> L >> R;

	L = L + ((A-L)%M+M)%M;
	R = R - ((R-A)%M+M)%M;

	ans = (R-L)/M + 1;

    cout << ans << endl;
}