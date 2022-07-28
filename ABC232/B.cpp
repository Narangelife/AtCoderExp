#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S, T;
    cin >> S >> T;
    vector<int> codeS(S.size()), codeT(T.size());
    for (int i = 0; i < S.size(); i++){
        codeS[i] = (int)(S[i] - 'a');
        codeT[i] = (int)(T[i] - 'a');
    }
    int K = (codeT[0] - codeS[0] + 26) % 26;
    for (int i = 0; i < S.size(); i++){
        int sub = (codeT[i] - codeS[i] + 26) % 26;
        if (sub != K){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}