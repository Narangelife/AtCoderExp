#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;
    if (S[0] == S[1] && S[1] == S[2]){
        cout << "-1" << endl;
    }else if (S[0] == S[1]){
        cout << S[2] << endl;
    }else if (S[1] == S[2]){
        cout << S[0] << endl;
    }else{
        cout << S[1] << endl;
    }
    return 0;
}