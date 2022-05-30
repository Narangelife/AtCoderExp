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
    int H, W;
    cin >> H >> W;
    vector<pair<int, int>> S;
    for (int i = 0; i < H; i++){
        string inp;
        cin >> inp;
        for (int j = 0; j < W; j++){
            if (inp[j] == 'o'){
                S.emplace_back(i, j);
            }
        }
    }

    int answer = abs(S[0].first - S[1].first) + abs(S[0].second - S[1].second);
    cout << answer << endl;

    return 0;
}