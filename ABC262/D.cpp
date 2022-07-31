#include <bits/stdc++.h>

#define mod 998244353
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }

    ll answer = 0;
    for (int i = 1; i <= N; i++){
        vector dp(101, vector(101, vector<int>(101, 0)));
        dp[0][0][0] = 1;
        for (int j = 1; j <= N; j++){
            for (int k = 0; k <= i; k++){
                for (int l = 0; l < i; l++){
                    dp[j][k][l] += dp[j - 1][k][l];
                    dp[j][k][l] %= mod;
                    if (k != i){
                        dp[j][k + 1][(l + a[j - 1]) % i] += dp[j - 1][k][l];
                        dp[j][k + 1][(l + a[j - 1]) % i] %= mod;
                    }
                }
            }
        }
        answer += dp[N][i][0];
        answer %= mod;
    }

    cout << answer << endl;
    return 0;
}