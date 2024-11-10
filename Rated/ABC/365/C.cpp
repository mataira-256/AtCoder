#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N;
    int64_t M;
    cin >> N >> M;
    vector<int> A(N);
    Arep(i, 0, N) cin >> A.at(i);

    /* solve */
    int ans = -1;

    int max = A.at(0);
    Arep(i, 1, N) if(A.at(i) > max) max = A.at(i);

    int64_t sum, sum1;
    int l = 0, r = max-1;
    int m = (l+r)/2;

    while(l <= r){
        sum = 0;
        sum1 = 0;
        Arep(i, 0, N){
            sum += min(m, A.at(i));
            sum1 += min(m+1, A.at(i));
        }
        if(sum <= M && M < sum1){
            ans = m;
            break;
        }else if(M < sum) r = m - 1;
        else l = m + 1;
        m = (l+r)/2;
    }

    if(ans == -1) cout << "infinite" << endl;
    else cout << ans << endl;
}