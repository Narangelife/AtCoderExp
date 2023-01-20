#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S, T;
    cin >> S >> T;
    for (int i = 0; i <= (int)S.size() - (int)T.size(); i++){
        string tmp;
        for (int j = 0; j < T.size(); j++){
            tmp.push_back(S[i + j]);
        }
        if (T == tmp){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}