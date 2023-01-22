#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll N, A, B;
    cin >> N >> A >> B;
    string S;
    cin >> S;
    S += S;

    ll answer = 1ll << 60;
    for (ll i = 0; i < N; i++){
        ll sub_answer = A * i;
        for (ll j = 0; j < N / 2; j++){
            if (S[i + j] != S[i + N - 1 - j]) sub_answer += B;
        }
        answer = min(answer, sub_answer);
    }
    cout << answer << endl;
    return 0;
}