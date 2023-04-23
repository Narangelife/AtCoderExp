#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, T;
    cin >> N >> T;
    vector<int> C(N), R(N);
    int Tcount = 0;
    for (int i = 0; i < N; i++){
        cin >> C[i];
        if (C[i] == T) Tcount++;
    }
    for (int i = 0; i < N; i++){
        cin >> R[i];
    }

    if (Tcount == 0) T = C[0];
    vector<pair<int, int>> RinC;
    for (int i = 0; i < N; i++){
        if (C[i] == T) RinC.emplace_back(R[i], i);
    }
    sort(RinC.begin(), RinC.end(), greater<>());

    cout << RinC[0].second + 1 << endl;
    return 0;
}