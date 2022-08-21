#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool UV[200001][200001];

int main(){
    int N, M, E;
    cin >> N >> M >> E;
    vector<pair<pair<int, int>, bool>> line(E);
    for (int i = 0; i < E; i++){
        int U, V;
        cin >> U >> V;
        line[i] = {{U, V}, true};
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++){
        int X;
        cin >> X;
        line[X - 1].second = false;
    }
    vector<vector<int>> Graph(N + M + 1);
    for (int i = 0; i < E; i++){
        if (line[i].second){
            int U = line[i].first.first;
            int V = line[i].first.second;
            Graph[U].push_back(V);
            Graph[V].push_back(U);
        }
    }

    for (int i = N + 1; i <= N + M; i++){
        vector<int> dist(N + M, -1);
        queue<int> que;
        dist[0] = 0;
        que.push(i);
    }

    return 0;
}