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

long long A[200001];
long long dp[40][200001]; //初期 j 個で 2^i 回後の操作での個数

int main(){
    int N;
    long long K;
    cin >> N >> K;
    for (int i = 0; i < N; i++){
        cin >> A[i];
        dp[0][i] = A[i];
    }

    return 0;
}