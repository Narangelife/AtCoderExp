#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;

    bool isIn = false;
    for (int i = 0; i < N; i++){
        if (S[i] == '"'){
            isIn = !isIn;
            continue;
        }

        if (S[i] == ',' && !isIn){
            S[i] = '.';
        }
    }
    cout << S << endl;
    return 0;
}