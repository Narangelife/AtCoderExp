#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;
    transform(S.begin(), S.end(), S.begin(), ::toupper);
    cout << S << endl;
    return 0;
}