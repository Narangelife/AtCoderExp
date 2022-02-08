#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;

int main(){

    /* DP: 動的計画法 */

    int N;
    cin >> N;
    vector<int> h(N);
    for (int &v: h) cin >> v;

    vector<int> DP(N, 1000000000);
    DP[0] = 0;

    for (int i = 1; i < N; i++){
        int s1, s2 = 1000000000;
        s1 = abs(h[i] - h[i - 1]) + DP[i - 1];
        if (i > 1){
            s2 = abs(h[i] - h[i - 2]) + DP[i - 2];
        }

        DP[i] = (s1 < s2) ? s1: s2;
    }

    cout << DP[N - 1] << endl;

    return 0;
}
