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

using namespace std;

long long dp[101][100001]; //i番目まで重さj以下になる、最大の価値

struct goods{
    int w, v;
};

int main(){
    int N, W;
    cin >> N >> W;
    vector<goods> G(N);
    for (int i = 0; i < N; i++){
        cin >> G[i].w >> G[i].v;
    }
    for (int i = 0; i < N; i++){
        int w = G[i].w, v = G[i].v;
        for (int j = 0; j <= W; j++){
            dp[i + 1][j] = (j - w >= 0) ? max(dp[i][j], dp[i][j - w] + v) : dp[i][j];
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}