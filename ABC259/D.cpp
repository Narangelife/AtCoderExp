#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct cir{
    ll x;
    ll y;
    ll r;
};

int main(){
    int N;
    ll sx, sy, tx, ty;
    cin >> N >> sx >> sy >> tx >> ty;
    vector<cir> EN(N);
    vector<vector<int>> Graph(N);
    vector<int> sg;
    int s, g;
    for (int i = 0; i < N; i++){
        cin >> EN[i].x >> EN[i].y >> EN[i].r;
        if ((sx - EN[i].x)*(sx - EN[i].x) + (sy - EN[i].y)*(sy - EN[i].y) == EN[i].r*EN[i].r) s = i;
        if ((tx - EN[i].x)*(tx - EN[i].x) + (ty - EN[i].y)*(ty - EN[i].y) == EN[i].r*EN[i].r) g = i;
    }

    for (int i = 0; i < N - 1; i++){
        cir a = EN[i];
        for (int j = i + 1; j < N; j++){
            cir b = EN[j];
            ll d = (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y);
            if (d <= (a.r + b.r)*(a.r + b.r) && d >= (a.r - b.r)*(a.r - b.r)){
                Graph[i].push_back(j);
                Graph[j].push_back(i);
            }
        }
    }

    vector<int> dist(N, -1);
    queue<int> que;
    dist[0] = 0;
    que.push(s);

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for (int nv: Graph[v]){
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

    if (dist[g] == -1){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }


    return 0;
}