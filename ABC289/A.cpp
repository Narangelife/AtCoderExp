#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;
    string answer;
    for (char i : s){
        if (i == '0'){
            answer += '1';
        }else{
            answer += '0';
        }
    }
    cout << answer << endl;
    return 0;
}