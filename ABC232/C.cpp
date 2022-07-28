#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool graphT[10][10], graphA[10][10];

int main(){
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++){
        int A, B;
        cin >> A >> B;
        graphT[A][B] = true;
        graphT[B][A] = true;
    }
    for (int i = 0; i < M; i++){
        int C, D;
        cin >> C >> D;
        graphA[C][D] = true;
        graphA[D][C] = true;
    }

    vector<int> P(N);
    iota(P.begin(), P.end(), 1);
    do {
        bool answer = true;
        for (int i = 1; i <= N; i++){
            for (int j = 1; j <= N; j++){
                if (graphT[i][j] != graphA[P[i - 1]][P[j - 1]]){
                    answer = false;
                    break;
                }
            }
        }
        if (answer){
            cout << "Yes" << endl;
            return 0;
        }
    } while(next_permutation(P.begin(), P.end()));

    cout << "No" << endl;
    return 0;
}