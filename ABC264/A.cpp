#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int L, R;
    string ac = "atcoder";
    cin >> L >> R;
    for (int i = L - 1; i < R; i++){
        cout << ac[i];
    }
    cout << endl;
    return 0;
}