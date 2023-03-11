#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); i++){
        if (65 <= S[i] && S[i] <= 90){
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}