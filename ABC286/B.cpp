#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;

    string answer = "";
    for (int i = 0; i < N; i++){
        if (S[i] == 'n' && i + 1 < N && S[i + 1] == 'a'){
            i++;
            answer += "nya";
        }else{
            answer += S[i];
        }
    }
    cout << answer << endl;
    return 0;
}