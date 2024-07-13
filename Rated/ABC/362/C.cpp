#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N;
    cin >> N;
    vector<int> L(N), R(N);
    Arep(i, 0, N) cin >> L.at(i) >> R.at(i);

    /* solve */
    int64_t L_sum = 0, R_sum = 0;
    Arep(i, 0, N){
        L_sum += L.at(i);
        R_sum += R.at(i);
    }

    if(L_sum <= 0 && 0 <= R_sum){
        cout << "Yes" << endl;

        int64_t now = L_sum;
        int X;
        Arep(i, 0, N){
            if(now == 0) X = L.at(i);
            else if(now + R.at(i)-L.at(i) <= 0) X = R.at(i);
            else X = L.at(i) + (now*-1);
            now += X - L.at(i);
            cout << X << " ";
        }
    }else cout << "No" << endl;

}