#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    vector<string> S(10);
    for (int i = 0; i < 10; i++){
        cin >> S[i];
    }
    int A = 1e9, B = -1e9, C = 1e9, D = -1e9;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (S[i][j] == '#'){
                A = min(A, i + 1);
                B = max(B, i + 1);
                C = min(C, j + 1);
                D = max(D, j + 1);
            }
        }
    }
    cout << A << " " << B << endl;
    cout << C << " " << D << endl;
    return 0;
}