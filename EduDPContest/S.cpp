#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <algorithm>
#include <numeric>
#define mod 1000000007
using namespace std;

long long dp[10001][2][100];
long long MOD = 1e9 + 7;

// https://atcoder.jp/contests/dp/tasks/dp_s
int main(){
    string K;
    int D;
    cin >> K;
    cin >> D;
    dp[0][0][0] = 1; //0桁目以前が最大値同一なのは00~000****の1通り
    for (int i = 0; i < K.size(); i++){
        int ni = (K[i] - '0'); // i+1桁目の最大値の桁値
        for (int j = 0; j < D; j++){
            for (int k = 0; k < ni; k++){
                //dp[i][false] -> dp[i+1][true] 遷移
                dp[i + 1][1][(j + k) % D] += dp[i][0][j];
                dp[i + 1][1][(j + k) % D] %= MOD;
            }
            for (int k = 0; k < 10; k++){
                //dp[i][true] -> dp[i+1][true] 遷移
                dp[i + 1][1][(j + k) % D] += dp[i][1][j];
                dp[i + 1][1][(j + k) % D] %= MOD;
            }
                //dp[i][false] -> dp[i+1][false] 遷移
            dp[i + 1][0][(j + ni) % D] = dp[i][0][j] % MOD;
        }
    }
    cout << dp[K.size()][0][0] + dp[K.size()][1][0] - 1 << endl;

    return 0;
}
