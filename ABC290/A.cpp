#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    int answer = 0;
    for (int i = 0; i < M; i++){
        int B;
        cin >> B;
        answer += A[B - 1];
    }
    cout << answer << endl;
    return 0;
}