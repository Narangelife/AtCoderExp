#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll N;
    cin >> N;
    vector<ll> a(N);
    for (ll i = 0; i < N; i++){
        cin >> a[i];
    }
    ll id = 0;
    ll sa = 0;
    for (ll i = 0; i < N; i++){
        if (i + 1 == a[i]){
            id++;
            continue;
        }
        if (a[a[i] - 1] == i + 1) sa++;
    }

    ll answer = 0;
    answer += id * (id - 1) / 2;
    answer += sa / 2;
    cout << answer << endl;

    return 0;
}