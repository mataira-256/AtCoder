#include <bits/stdc++.h>
using namespace std;
#define Arep(i, n, m) for(int i = n; i < (int)(m); i++)
#define Drep(i, n, m) for(int i = m-1; i >= (int)(n); i--)
#define all(v) v.begin(), v.end()

void out(vector<vector<int>> &A, int &N){
    Arep(i, 0, N){
        Arep(j, 0, N) cout << A.at(i).at(j) << " ";
        cout << endl;
    }
} 

int main() {
    /* input */
    int N, M, T;
    cin >> N >> M >> T;
    vector<vector<int>> x(2*N*(N-1), vector<int>(M));
    Arep(i, 0, 2*N*(N-1)) Arep(j, 0, M) cin >> x.at(i).at(j); 

    /* solve */
    vector<vector<int>> A(N, vector<int>(N));

    Arep(turn, 0, T){
        int num = 0;
        Arep(i, 0, N) Arep(j, 0, N) A.at(i).at(j) = num++;

        out(A, N);
    }

}