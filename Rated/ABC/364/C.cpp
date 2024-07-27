#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N;
    int64_t X, Y;
    cin >> N >> X >> Y;
    vector<int> A(N), B(N);
    Arep(i, 0, N) cin >> A.at(i);
    Arep(i, 0, N) cin >> B.at(i);

    /* solve */
    sort(all(A));
    sort(all(B));
    reverse(all(A));
    reverse(all(B));

    int64_t A_sum = 0, B_sum = 0;
    int A_count = -1, B_count = -1;
    Arep(i, 0, N){
        A_sum += A.at(i);
        if(A_sum > X){
            A_count = i + 1;
            break;
        }
    }
    Arep(i, 0, N){
        B_sum += B.at(i);
        if(B_sum > Y){
            B_count = i + 1;
            break;
        }
    }
    if(A_count == -1) A_count = N;
    if(B_count == -1) B_count = N;

    cout << min(A_count, B_count) << endl;
}