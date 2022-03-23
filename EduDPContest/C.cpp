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

int dp[100001][3];

struct happy{
    int a, b, c;
};

int main(){
    int N;
    cin >> N;
    vector<happy> happiness(N);
    for (int i = 0; i < N; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        happiness[i].a = a;
        happiness[i].b = b;
        happiness[i].c = c;
    }

    dp[1][0] = happiness[0].a;
    dp[1][1] = happiness[0].b;
    dp[1][2] = happiness[0].c;

    for (int i = 2; i <= N; i++){
        dp[i][0] = happiness[i - 1].a + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = happiness[i - 1].b + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = happiness[i - 1].c + max(dp[i - 1][1], dp[i - 1][0]);
    }

    int answer = max(dp[N][0], max(dp[N][1], dp[N][2]));
    cout << answer << endl;

    return 0;
}