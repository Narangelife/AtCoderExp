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

// https://atcoder.jp/contests/dp/tasks/dp_s
int main(){
    string K;
    int D;
    cin >> K;
    cin >> D;
    dp[0][0][0] = 1;
    for (int i = 0; i < K.size(); i++){
        for (int j = 0; j < D; j++){
            for (int k = 0; k < 10; k++){
                dp[i + 1][1][(j + k) % D] += dp[i][1][j];
                dp[i + 1][1][(j + k) % D] %= mod;
            }
            int ni = (K[i] - '0');
            for (int k = 0; k < ni; k++){
                dp[i + 1][1][(j + k) % D] += dp[i][0][j];
                dp[i + 1][1][(j + k) % D] &= mod;
            }
            dp[i + 1][0][(j + ni) % D] = dp[1][0][j];
        }
    }
    cout << dp[K.size()][0][0] + dp[K.size()][1][0] - 1 << endl;

    return 0;
}
