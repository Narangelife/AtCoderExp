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

int A[200001];
long long dp[200001][4]; //i 番目まで決めて, j 個決定済みの 通り

int main(){
    int N;
    int count = 0;
    cin >> N;
    for (int i = 0; i < N; i++){
        int n;
        cin >> n;
        if (A[n] == 0) count++;
        A[n]++;
    }

    int k = 1;
    dp[0][0] = 1;
    for (int i = 1; i <= 200000; i++){
        if (A[i] == 0) continue;
        dp[k][0] = dp[k - 1][0];
        for (int j = 1; j < 4; j++){
            dp[k][j] = dp[k - 1][j - 1] * A[i] + dp[k - 1][j];
        }
        if (k == count) break;
        k++;
    }

    cout << dp[count][3] << endl;

    return 0;
}