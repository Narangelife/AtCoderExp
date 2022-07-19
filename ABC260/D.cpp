#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> answer(N + 1, -1);
    map<int, vector<int>> gnd;

    for (int i = 1; i <= N; i++){
        int P;
        cin >> P;
        auto top_itr = gnd.lower_bound(P); //P以上の最小のカード山
        if (top_itr != gnd.end()){
            gnd[P] = move(top_itr -> second); //カード山のカード内容(.second要素=vector<int>)をコピー(参照を移動)
            gnd.erase(top_itr); //参照元は削除で移行完了
        }
        gnd[P].push_back(P);
        if (gnd[P].size() == K){
            for (auto v: gnd[P]){
                answer[v] = i;
            }
            gnd.erase(P);
        }
    }

    for (int i = 1; i <= N; i++){
        cout << answer[i] << endl;
    }

    return 0;
}