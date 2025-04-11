#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

vector<int> quick(vector<int> array);

int main() {
    /* input */
    vector<int> array(1000);
    rep(i, 1000) cin >> array.at(i);

    /* solve */
    vector<int> sorted = quick(array);

    rep(i, sorted.size()) cout << sorted.at(i) << " ";
}

vector<int> quick(vector<int> array){
    if(array.size() <= 1) return array;

    vector<int> small, large, equal;
    int pivot = array.at(0);
    rep(i, array.size()){
        if(array.at(i) == pivot) equal.push_back(array.at(i));
        else if(array.at(i) < pivot) small.push_back(array.at(i));
        else large.push_back(array.at(i));
    }

    small = quick(small);
    large = quick(large);

    small.insert(small.end(), all(equal));
    small.insert(small.end(), all(large));
    return small;
}