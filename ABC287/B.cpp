#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector<string> S(N), T(M);
    for (int i = 0; i < N; i++) cin >> S[i];
    for (int i = 0; i < M; i++) cin >> T[i];

    int answer = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            bool checker = true;
            for (int k = 0; k < 3; k++){
                checker &= S[i][k + 3] == T[j][k];
            }
            if (checker){
                answer++;
                break;
            }
        }
    }
    cout << answer << endl;
    return 0;
}