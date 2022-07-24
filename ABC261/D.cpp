#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll dp[5001][5001]; // i番目コイントスでカウンタjでの最大値
ll Y[5001];

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> X(N + 1);
    for (int i = 1; i <= N; i++){
        cin >> X[i];
    }
    for (int i = 1; i <= M; i++){
        int c;
        cin >> c >> Y[c];
    }

    dp[0][0] = 0;
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= i; j++){ // j > i: カウンタがコイントス回数を上回らない
            // まずは表が出た場合の処理(裏が出た場合は dp[i][0] = だから)
            dp[i][j] = dp[i - 1][j - 1] + (ll)X[i] + Y[j];
        }
        dp[i][0] = 0; //初期値として最小値をセット
        for (int j = 0; j < N; j++){
            // i - 1番目のコイントスで、どのカウンタ状態で裏が出ればお金が一番多いか？
            dp[i][0] = max(dp[i][0], dp[i - 1][j]);
        }
    }

    ll answer = -1;
    for (int i = 0; i <= N; i++){
        answer = max(answer, dp[N][i]);
    }
    cout << answer << endl;
    return 0;
}