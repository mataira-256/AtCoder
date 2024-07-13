#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N, L, R;
    cin >> N >> L >> R;
    vector<int> A(N);
    Arep(i, 0, N) cin >> A.at(i);

    /* solve */
    Arep(i, 0, N){
        if(A.at(i) < L) cout << L << " ";
        else if(R < A.at(i)) cout << R << " ";
        else cout << A.at(i) << " ";
    }

}