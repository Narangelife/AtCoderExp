#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool checker(char x, char y){
    return x == '?' || y == '?' || x == y;
}

int main(){
    string S, T;
    cin >> S >> T;

    vector<bool> pre(T.size() + 1, false), suf(T.size() + 1, false);
    pre[0] = true;
    suf[0] = true;

    for (int i = 1; i <= T.size(); i++){
        if (!checker(S[i - 1], T[i - 1])) break;
        pre[i] = true;
    }
    for (int i = 1; i <= T.size(); i++){
        if (!checker(S[S.size() - i], T[T.size() - i])) break;
        suf[i] = true;
    }

    for (int i = 0; i <= T.size(); i++){
        string answer = (pre[i] && suf[T.size() - i]) ? "Yes": "No";
        cout << answer << endl;
    }
    return 0;
}