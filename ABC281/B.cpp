#include <bits/stdc++.h>
#include <regex>

using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;
    regex re("^[A-Z][1-9][0-9]{5}[A-Z]");
    if (regex_match(S, re)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}