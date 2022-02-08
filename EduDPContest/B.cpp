#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;

int main(){

    /* DP: 動的計画法 */

    int N, K;
    cin >> N >> K;
    vector<int> h(N);
    for (int &v: h) cin >> v;

    vector<int> DP(N, 1000000000);
    DP[0] = 0;

    for (int i = 1; i < N; i++){
        int cost = 1000000000;
        for (int j = 1; j <= K; j++){
            if (i - j >= 0){
                int tmp = abs(h[i] - h[i - j]) + DP[i - j];
                if (tmp < cost) cost = tmp;
            }
        }
        DP[i] = cost;
    }

    cout << DP[N - 1] << endl;

    return 0;
}
