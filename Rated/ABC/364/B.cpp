#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

int main() {
    /* input */
    int H, W;
    cin >> H >> W;
    int Si, Sj;
    cin >> Si >> Sj;
    vector<vector<char>> C(H, vector<char>(W));
    Arep(i, 0, H) Arep(j, 0, W) cin >> C.at(i).at(j);
    string X;
    cin >> X;

    /* solve */
    Si--;
    Sj--;
    Arep(i, 0, X.size()){
        switch (X.at(i)){
        case 'L':
            if(Sj != 0 && C.at(Si).at(Sj-1) == '.') Sj--;
            break;
        case 'R':
            if(Sj != W-1 && C.at(Si).at(Sj+1) == '.') Sj++;
            break;
        case 'U':
            if(Si != 0 && C.at(Si-1).at(Sj) == '.') Si--;
            break;
        case 'D':
            if(Si != H-1 && C.at(Si+1).at(Sj) == '.') Si++;
            break;
        }
    }
    Si++;
    Sj++;

    cout << Si << " " << Sj << endl;
}