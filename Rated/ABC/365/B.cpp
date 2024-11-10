#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N;
    cin >> N;
    vector<int> A(N);
    Arep(i, 0, N) cin >> A.at(i);

    /* solve */
    vector<int> B = A;
    sort(all(B));
    reverse(all(B));

    int ans;
    Arep(i, 0, N) if(A.at(i) == B.at(1)) ans = i;
    cout << ans+1 << endl;
}