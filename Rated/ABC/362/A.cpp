#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int R, G, B;
    cin >> R >> G >> B;
    string C;
    cin >> C;

    /* solve */
    if(C == "Red") cout << min(G, B);
    if(C == "Green") cout << min(R, B);
    if(C == "Blue") cout << min(R, G);

}