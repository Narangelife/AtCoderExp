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
#include <set>
#define inf 100100100100;

using namespace std;

long long dp[101][100001]; //i番目までで価値がjになる最小の重量

struct goods{
    int w, v;
};

int main(){
    int N, W;
    cin >> N >> W;
    vector<goods> G(N);
    int sumValue = 0;
    for (int i = 0; i < N; i++){
        cin >> G[i].w >> G[i].v;
        sumValue += G[i].v;
    }

    for (int i = 0; i <= 100; i++){
        for (int j = 0; j <= 100000; j++){
            dp[i][j] = inf;
        }
    }

    dp[0][0] = 0;
    for (int i = 0; i < N; i++){
        int w = G[i].w, v = G[i].v;
        for (int j = 0; j <= sumValue; j++){
            // vを足してjになる可能性があるか ? vを足したほうが重量少ないか, そもそもjを流用したほうが少ないか : 流用
            dp[i + 1][j] = (j - v >= 0) ? min(dp[i][j - v] + w, dp[i][j]) : dp[i][j];
        }
    }

    int answer = 100000;
    // 最小重量が W 以下になる最大の価値
    while(dp[N][answer] > W) answer--;
    cout << answer << endl;

    return 0;
}