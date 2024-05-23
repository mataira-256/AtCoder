#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A.at(i);

    map<int, int> count;
    for(int n : A){
        if(count.count(n)){
            count.at(n)++;
        }else{
            count[n] = 1;
        }
    }

    int max_count = 0;
    int ans;
    for(int n : A){
        if(max_count < count.at(n)){
            max_count = count.at(n);
            ans = n;
        }
    }

    cout << ans << " " << max_count << endl;
}