#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    vector<ll> Sum(N + 1);
    Sum[0] = 0;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < N; i++){
        Sum[i + 1] = Sum[i] + A[i];
    }

    for (int i = 0; i < Q; i++){
        ll X;
        cin >> X;
        int lower = (int)(lower_bound(A.begin(), A.end(), X) - A.begin());
        ll left = lower * X - Sum[lower];
        ll right = Sum[N] - Sum[lower] - (N - lower) * X;
        cout << left + right << endl;
    }
    return 0;
}