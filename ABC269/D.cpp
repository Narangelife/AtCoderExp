#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int graph[2005][2005];
int dx[6] = {-1, -1, 0, 0, 1, 1};
int dy[6] = {-1, 0, -1, 1, 0, 1};

int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> pos(N);
    for (int i = 0; i < N; i++){
        cin >> pos[i].first >> pos[i].second;
        pos[i].first += 1001;
        pos[i].second += 1001;
        graph[pos[i].first][pos[i].second] = i + 1;
    }


    return 0;
}