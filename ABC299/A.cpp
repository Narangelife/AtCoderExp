#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    string S;
    cin >> N >> S;

    int flag = 0;
    for (int i = 0; i < N; i++){
        if (S[i] == '*' && flag){
            cout << "in" << endl;
            return 0;
        }else if (S[i] == '|'){
            flag ^= 1;
        }
    }
    cout << "out" << endl;
    return 0;
}