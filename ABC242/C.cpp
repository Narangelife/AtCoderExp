#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define mod 998244353

int dp[1000000][9];

int main(){
    unsigned int N;
    cin >> N;

    for (int i = 0; i < 9; i++){
        dp[0][i] = 1;
    }

    for (int i = 1; i < N; i++){
        for (int j = 0; j < 9; j++){
            dp[i][j] = dp[i - 1][j];
            dp[i][j] %= mod;
            if (j != 8) dp[i][j] += dp[i - 1][j + 1];
            dp[i][j] %= mod;
            if (j != 0) dp[i][j] += dp[i - 1][j - 1];
            dp[i][j] %= mod;
            if (dp[i][j] < 0){
                cout << "NO" << endl;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < 9; i++){
        count += dp[N - 1][i];
        count %= mod;
    }

    cout << count << endl;

    return 0;
}