#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(K);
    for (int i = 0; i < K; i++){
        cin >> A[i];
    }

    for (int i = 0; i < Q; i++){
        int L;
        cin >> L;
        if (A[L - 1] == N) continue;
        if (L < K && A[L] == A[L - 1] + 1) continue;
        A[L - 1]++;
    }

    for (int i = 0; i < K; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}