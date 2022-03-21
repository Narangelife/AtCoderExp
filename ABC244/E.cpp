#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#define mod 998244353
using namespace std;

// 頂点Sから辺をi回通って頂点jに行く経路数 (頂点Xを mod 2 でk回)
long long dp[2001][2001][2];

int main(){
    // N:頂点数, M:辺数, K:通過頂点数, S:開始点, T:終了点, X:偶数回点
    int N, M, K, S, T, X;
    cin >> N >> M >> K >> S >> T >> X;

    vector<pair<int, int>> Graph(M);
    for (int i = 0; i < M; i++){
        cin >> Graph[i].first >> Graph[i].second;
    }

    dp[0][S][0] = 1;
    for (int i = 0; i < K; i++){
        for (int j = 0; j < M; j++){
            for (int k = 0; k < 2; k++){
                int f = Graph[j].first;
                int s = Graph[j].second;
                if (s == X){
                    dp[i + 1][s][1 - k] += dp[i][f][k];
                    dp[i + 1][s][1 - k] %= mod;
                }else{
                    dp[i + 1][s][k] += dp[i][f][k];
                    dp[i + 1][s][k] %= mod;
                }

                if (f == X){
                    dp[i + 1][f][1 - k] += dp[i][s][k];
                    dp[i + 1][f][1 - k] %= mod;
                }else{
                    dp[i + 1][f][k] += dp[i][s][k];
                    dp[i + 1][f][k] %= mod;
                }
            }
        }
    }

    cout << dp[K][T][0] << endl;

    return 0;
}