#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    vector<pair<int, int>> sqr(4);
    for (int i = 0; i < 4; i++){
        cin >> sqr[i].first >> sqr[i].second;
    }

    for (int i = 0; i < 4; i++){
        int L_idx = (i - 1 < 0) ? 3 : i - 1;
        int R_idx = (i + 1 > 3) ? 0 : i + 1;

    }
    return 0;
}