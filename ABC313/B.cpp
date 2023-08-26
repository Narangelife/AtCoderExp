#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    vector<int> P(N, 0);
    for (int i = 0; i < M; i++){
        cin >> A[i] >> B[i];
        P[B[i] - 1]++;
    }

    int answer = -1, count = 0;
    for (int i = 0; i < N; i++){
        if (P[i] == 0){
            answer = i + 1;
            count++;
        }
    }

    if (count == 1){
        cout << answer << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}