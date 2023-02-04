#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, K;
    cin >> N >> K;
    vector<string> S(K);
    for (int i = 0; i < N; i++){
        string tmp;
        cin >> tmp;
        if (i < K) S[i] = tmp;
    }
    sort(S.begin(), S.end());
    for (int i = 0; i < K; i++){
        cout << S[i] << endl;
    }
    return 0;
}