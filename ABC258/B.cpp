#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int main(){
    int N;
    cin >> N;
    vector<vector<char>> A(N, vector<char>(N));
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> A[i][j];
            A[i][j] -= '0';
        }
    }

    long answer = -1;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            for (int k = 0; k < 8; k++){
                string value = "";
                for (int l = 0; l < N; l++){
                    int ix = (i + dx[k] * l + N) % N;
                    int iy = (j + dy[k] * l + N) % N;
                    int nextval = (A[ix][iy]);
                    value += to_string(nextval);
                }
                answer = max(answer, atol(value.c_str()));
            }
        }
    }
    cout << answer << endl;
    return 0;
}