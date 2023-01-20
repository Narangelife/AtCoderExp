#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;
    int answer = 0;
    for (char i : S){
        answer += (i == 'v') ? 1: 2;
    }
    cout << answer << endl;
    return 0;
}