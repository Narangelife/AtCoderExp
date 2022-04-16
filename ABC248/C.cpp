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

#define mod 998244353

using namespace std;

long long a[2501][51]; // 合計, 何桁目まで

int main(){
    int N, M, K;
    cin >> N >> M >> K;
    for (int i = 1; i <= K && i <= M; i++){
        a[i][1] = 1;
    }

    for (int i = 2; i <= N; i++){ //桁
        for (int j = 1; j <= M; j++){
            for (int k = 1; k <= K; k++){
                if (k + j <= K){
                    a[k + j][i] += a[k][i - 1];
                    a[k + j][i] %= 998244353;
                }
            }
        }
    }

    long long answer = 0;
    for (int i = 1; i <= K; i++){
        answer += a[i][N];
        answer %= 998244353;
    }
    cout << answer << endl;

    return 0;
}