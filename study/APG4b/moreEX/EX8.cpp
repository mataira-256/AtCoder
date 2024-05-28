#include <bits/stdc++.h>
using namespace std;

int main() {
    int pattern;
    string text;
    int price;
    int N;

    cin >> pattern;

    if(pattern == 2) cin >> text;

    cin >> price >> N;

    if(pattern == 2) cout << text << "!" << endl;
    cout << price*N << endl;
}
