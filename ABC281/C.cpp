#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll N, T;
    cin >> N >> T;
    vector<ll> A(N);
    vector<ll> Sum(N + 1);
    Sum[0] = 0;
    for (int i = 0; i < N; i++){
        cin >> A[i];
        Sum[i + 1] = Sum[i] + A[i];
    }
    T %= Sum[N];

    for (int i = 1; i <= N; i++){
        if (T < Sum[i]){
            cout << i << " " << T - Sum[i - 1] <<endl;
            break;
        }
    }

    return 0;
}