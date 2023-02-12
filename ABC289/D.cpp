#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll N, M;
    cin >> N;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++) cin >> A[i];
    cin >> M;
    vector<ll> B(M);
    for (ll i = 0; i < M; i++) cin >> B[i];
    ll X;
    cin >> X;
    vector<bool> isMochi(X + 1, false);
    for (auto v: B){
        isMochi[v] = true;
    }

    vector<bool> dp(X + 1, false);
    dp[0] = true;

    for (ll i = 0; i < X; i++){
        if (!dp[i] || isMochi[i]) continue;
        for (auto j: A){
            if (i + j <= X){
                dp[i + j] = true;
            }
        }
    }
    string answer = dp[X] ? "Yes": "No";
    cout << answer << endl;
    return 0;
}