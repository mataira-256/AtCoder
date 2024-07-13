#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    Arep(i, 0, N) cin >> A.at(i);

    /* solve */
    sort(all(A));
    int len = N - K;
    vector<int> diff(K+1);
    Arep(i, 0, K+1) diff.at(i) = A.at(i+len-1) - A.at(i);
    sort(all(diff));

    cout << diff.at(0) << endl;
}