#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (int i = 0; i < N; i++){
        cin >> S[i];
    }
    int answer = 0;
    for (int i = 0; i < N - 1; i++){
        for (int j = i + 1; j < N; j++){
            bool flag = true;
            for (int k = 0; k < M; k++){
                if (S[i][k] == 'x' && S[j][k] == 'x'){
                    flag = false;
                }
            }
            if (flag) {
                answer++;
            }
        }
    }
    cout << answer << endl;
    return 0;
}