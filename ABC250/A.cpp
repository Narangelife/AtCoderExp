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

int main(){
    int H, W, R, C;
    cin >> H >> W >> R >> C;

    int answer = 0;
    answer += 1 <= (R - 1) ? 1 : 0;
    answer += (R + 1) <= H ? 1 : 0;
    answer += 1 <= (C - 1) ? 1 : 0;
    answer += (C + 1) <= W ? 1 : 0;
    cout << answer << endl;
    return 0;
}