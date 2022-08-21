#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll N, M, T;
    cin >> N >> M >> T;
    vector<ll> A(N - 1);
    for (ll i = 0; i < N - 1; i++){
        cin >> A[i];
    }
    vector<ll> bonus(N, 0);
    for (ll i = 0; i < M; i++){
        ll X, Y;
        cin >> X >> Y;
        bonus[X - 1] = Y;
    }

    for (ll i = 0; i < N - 1; i++){
        T += bonus[i];
        if (T - A[i] <= 0){
            cout << "No" << endl;
            return 0;
        }else{
            T -= A[i];
        }
    }
    cout << "Yes" << endl;
    return 0;
}