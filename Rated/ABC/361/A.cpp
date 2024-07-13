#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N, K, X;
    cin >> N >> K >> X;
    vector<int> A(N);
    Arep(i, 0, N) cin >> A.at(i);

    /* solve */
    Arep(i, 0, N){
        cout << A.at(i) << " ";
        if(i == K - 1) cout << X << " ";
    }

}