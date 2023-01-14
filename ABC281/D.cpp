#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, K, D;
    cin >> N >> K >> D;
    vector<int> a(N);
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    // i桁目まで決定し j個採用済みで modDがk
    vector dp(N + 1, vector(K + 1, vector<ll>(D, -1)));

    dp[0][0][0] = 0;
    for (int i = 1; i <= N; i++){
        for (int j = 0; j <= K; j++){
            for (int k = 0; k < D; k++){
                if (dp[i - 1][j][k] == -1) continue;
                dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j][k]);
                if (j != K) dp[i][j + 1][(k + a[i - 1]) % D] = max(dp[i][j + 1][(k + a[i - 1]) % D], dp[i - 1][j][k] + a[i - 1]);
            }
        }
    }
    cout << dp[N][K][0] << endl;
    return 0;
}