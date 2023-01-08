#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void dfs(vector<vector<int>> &G, vector<bool> &checker, int s){
    checker[s] = true;
    for (int v: G[s]){
        if (checker[v]) continue;
        dfs(G, checker, v);
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N + 1);
    vector<bool> checker(N + 1, false);
    for (int i = 0; i < M; i++){
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int answer = 0;
    for (int i = 1; i <= N; i++){
        if (!checker[i]){
            answer++;
            dfs(G, checker, i);
        }
    }
    cout << answer << endl;
    return 0;
}