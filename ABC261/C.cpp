#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    map<string, int> S;
    for (int i = 0; i < N; i++){
        string inp;
        cin >> inp;
        if (S[inp] == 0){
            cout << inp << endl;
        }else{
            cout << inp << "(" << S[inp] << ")" << endl;
        }
        S[inp] += 1;
    }

    return 0;
}