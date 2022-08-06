#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll N, L, R;
    cin >> N >> L >> R;
    vector<ll> A(N), B(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
        //反転
        B[N - i - 1] = A[i];
    }

    vector<ll> l(N + 1, 0), r(N + 1, 0);
    // どこまで置換すれば総和が最小か、動的にチェック
    for (int i = 1; i <= N; i++){
        l[i] = min(l[i - 1] + A[i - 1], L * i);
        r[i] = min(r[i - 1] + B[i - 1], R * i);
    }

    ll answer = 9000900900900900900;
    for (int i = 0; i <= N; i++){
        answer = min(answer, l[i] + r[N - i]);
    }

    cout << answer << endl;

    return 0;
}