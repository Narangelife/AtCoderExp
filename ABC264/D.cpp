#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;
    string atcoder = "atcoder";
    int answer = 0;
    for (int i = 0; i < 7; i++){ //atcoder
        for (int j = 0; j < S.size(); j++){
            if (atcoder[i] == S[j]){
                answer += j;
                S.erase(j, 1);
                break;
            }
        }
    }
    cout << answer << endl;
    return 0;
}