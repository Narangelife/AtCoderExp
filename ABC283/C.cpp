#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;

    int answer = 0;
    for (int i = 0; i < S.length(); i++){
        int tp = S[i] - '0';
        if (tp == 0 && i + 1 < S.length()){
            if (S[i + 1] - '0' == 0){
                i++;
            }
        }
        answer++;
    }
    cout << answer << endl;
    return 0;
}