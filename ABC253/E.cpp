#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define mod 998244353
ll dp[1001][5001]; // i番目まで決定してi番目が値jの通り数
ll sum_dp[1001][5001];

int main(){
    ll N, M, K;
    cin >> N >> M >> K;
    for (int i = 1; i <= M; i++){
        sum_dp[1][i] = (1 + sum_dp[1][i - 1]) % mod;
    }
    for (int i = 1; i < N; i++){
        for (int j = 1; j <= M; j++){
            if (K == 0){
                dp[i + 1][j] = sum_dp[i][M] % mod;
            }else{
                if (j - K >= 1){
                    dp[i + 1][j] += sum_dp[i][j - K];
                    dp[i + 1][j] %= mod;
                }
                if (j + K <= M){
                    // 引き算のmodに注意
                    dp[i + 1][j] += (sum_dp[i][M] - sum_dp[i][j + K - 1] + mod) % mod;
                    dp[i + 1][j] %= mod;
                }
            }

            sum_dp[i + 1][j] = dp[i + 1][j] + sum_dp[i + 1][j - 1];
            sum_dp[i + 1][j] %= mod;
        }
    }
    ll answer = 0;
    for (int i = 1; i <= M; i++){
        answer += dp[N][i];
        answer %= mod;
    }
    cout << answer << endl;
    return 0;
}