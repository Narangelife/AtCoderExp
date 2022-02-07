#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main(){

    /* BSF : 幅優先探索 */

    int N, Q;
    cin >> N >> Q;
    Graph graph(N + 1);
    for (int i = 0; i < Q; i++){
        int l, r;
        cin >> l >> r;
        graph[l - 1].push_back(r);
        graph[r].push_back(l - 1);
    }

    vector<int> dist(N + 1, -1);
    queue<int> que;

    dist[0] = 0;
    que.push(0);

    while (!que.empty()){
        int v = que.front();
        que.pop();

        for (int nv: graph[v]){
            if (dist[nv] != -1) continue;

            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

//    for (int i = 0; i < N + 1; i++){
//        cout << i << ": " << dist[i] << endl;
//    }

    if (dist[N] != -1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
