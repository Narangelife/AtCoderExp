#include <bits/stdc++.h>
#define mod 998244353

using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> dxy(3);
    for (int i = 0; i < 3; i++){
        cin >> dxy[i].first >> dxy[i].second;
    }
    set<pair<int, int>> obst;
    for (int i = 0; i < M; i++){
        int X, Y;
        cin >> X >> Y;
        obst.insert({X, Y});
    }

    map<pair<ll, ll>, ll> dp; // n回ワープ後に(x,y)にいる経路数
    dp[{0, 0}] = 1; // 初項
    for (int i = 0; i < N; i++){
        map<pair<ll, ll>, ll> tmp; // 1ワープでの行き先を一時的に格納
        for (auto [xy, count]: dp){ // n - 1ワープした時点でのありうる座標一覧
            auto [x, y] = xy; // 分離
            for (auto [dx, dy]: dxy){ // 3ワープ分
                if (obst.find({x + dx, y + dy}) == obst.end()){ // ワープ先が不可場所でないか？
                    tmp[{x + dx, y + dy}] += count;
                    tmp[{x + dx, y + dy}] %= mod;
                }
            }
        }
        swap(dp, tmp); // 一時格納で上書き
    }

    ll answer = 0;
    for (auto [_, count]: dp){
        answer += count;
        answer %= mod;
    }

    cout << answer << endl;

    return 0;
}