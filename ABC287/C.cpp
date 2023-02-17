#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector G(N, vector<int>());
    for (int i = 0; i < M; i++){
        int u, v;
        cin >> u >> v;
        G[u - 1].push_back(v - 1);
        G[v - 1].push_back(u - 1);
    }

    if (N - 1 != M){
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < N; i++){
        if (G[i].size() > 2){
            cout << "No" << endl;
            return 0;
        }
    }

    vector<bool> isReached(N, false);
    queue<int> que;
    isReached[0] = true;
    que.push(0);
    while (!que.empty()){
        int now = que.front();
        que.pop();
        for (int v: G[now]){
            if (isReached[v]) continue;
            que.push(v);
            isReached[v] = true;
        }
    }

    bool checker = true;
    for (int i = 0; i < N; i++){
        checker &= isReached[i];
    }
    string answer = checker ? "Yes": "No";
    cout << answer << endl;
    return 0;
}