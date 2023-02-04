#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector G(N, vector<int>());
    for (int i = 0; i < M; i++){
        int A, B;
        cin >> A >> B;
        G[A - 1].push_back(B - 1);
        G[B - 1].push_back(A - 1);
    }

    vector<bool> checked(N, false);
    int S = 0;
    for (int i = 0; i < N; i++){
        if (!checked[i]){
            S++;
            queue<int> q;
            q.push(i);
            while (!q.empty()){
                int front = q.front();
                q.pop();
                for (auto v: G[front]){
                    if (!checked[v]){
                        q.push(v);
                        checked[v] = true;
                    }
                }
            }
        }
    }
    cout << M - N + S << endl;
    return 0;
}