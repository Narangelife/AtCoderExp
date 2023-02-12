#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector a(M, vector<int>());
    for (int i = 0; i < M; i++){
        int C;
        cin >> C;
        for (int j = 0; j < C; j++){
            int tmp;
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }

    int answer = 0;
    for (int i = 1; i <= (1 << M) - 1; i++){
        vector<bool> checker(N, false);
        for (int j = 0; j < M; j++){
            if (i & (1 << j)){
                for (auto v: a[j]){
                    checker[v - 1] = true;
                }
            }
        }
        bool trg = true;
        for (int j = 0; j < N; j++){
            trg &= checker[j];
        }
        answer += trg ? 1: 0;
    }
    cout << answer << endl;
    return 0;
}