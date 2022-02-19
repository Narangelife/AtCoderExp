#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;
#define mod 998244353

int main(){

    /* DP: 動的計画法 */

    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    vector<int> Q(N);
    for (int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        P[i] = tmp;
    }
    for (int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        Q[i] = tmp;
    }



    return 0;
}
