#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int N, Q;
    cin >> N >> Q;
    vector<int> a(N);
    Arep(i, 0, N) cin >> a.at(i);
    vector<int> b(Q), k(Q);
    Arep(i, 0, Q) cin >> b.at(i) >> k.at(i);

    /* solve */
    vector<int> d;
    Arep(i, 0, Q){
        d = a;
        Arep(j, 0, N) d.at(j) = abs(d.at(j)-b.at(i));
        sort(all(d));
        cout << d.at(k.at(i)-1) << endl;
    }

}