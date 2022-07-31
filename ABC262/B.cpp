#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool ver[101][101];

int main(){
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++){
        int U, V;
        cin >> U >> V;
        ver[U][V] = true;
        ver[V][U] = true;
    }
    int answer = 0;
    for (int i = 1; i <= N - 2; i++){
        for (int j = i + 1; j <= N - 1; j++){
            for (int k = j + 1; k <= N; k++){
                if (ver[i][j] && ver[j][k] && ver[k][i]){
                    answer++;
                }
            }
        }
    }

    cout << answer << endl;

    return 0;
}