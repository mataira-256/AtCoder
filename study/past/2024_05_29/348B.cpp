#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    int N;
    cin >> N;

    vector<int> x(N);
    vector<int> y(N);
    rep(i, N) cin >> x.at(i) >> y.at(i);

    rep(i, N){
        int max_dis = 0;
        int max_idx;
        rep(j, N){
            if((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])>max_dis){
                max_dis = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
                max_idx = j + 1;
            }
        }
        cout << max_idx << endl;
    }
}