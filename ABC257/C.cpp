#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    string S;
    cin >> N >> S;
    vector<pair<int, char>> W(N);
    for (int i = 0; i < N; i++){
        int w;
        cin >> w;
        W[i] = {w, S[i]};
    }

    sort(W.begin(), W.end());




    return 0;
}