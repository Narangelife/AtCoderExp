#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll N;
    ll tms = 998244353;
    cin >> N;
    ll answer = (N % tms >= 0) ? N % tms : (N % tms) + tms;
    cout << answer << endl;
    return 0;
}