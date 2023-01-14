#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S, T;
    cin >> S >> T;

    for (int i = 0; i < S.size(); i++){
        if (S[i] != T[i]){
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << S.size() + 1 << endl;
    return 0;
}