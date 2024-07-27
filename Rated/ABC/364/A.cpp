#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N;
    cin >> N;
    vector<string> S(N);
    Arep(i, 0, N) cin >> S.at(i);

    /* solve */

    bool ok = true;
    Arep(i, 0, N-2){
        if(S.at(i) == S.at(i+1) && S.at(i) == "sweet") ok = false;
    }

    cout << (ok ? "Yes" : "No") << endl;
}