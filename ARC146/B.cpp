#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll N, M, K;
    cin >> N >> M >> K;
    vector<ll> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    ll answer = 0;
    // 貪欲法: 10000..000をK個のANDで作れるか? -> 11000..000作れる? -> 11100..000作れる?...
    for (int i = 31; i >= 0; i--){ //最大 2^31 - 2 -> 最大32bit
        vector<ll> tmp(N);
        for (int j = 0; j < N; j++){ // 各A_iについて
            ll checkObject = answer + (1ll << i);
            for (int k = 31; k >= 0; k--){ // 31bit目から0bit目まで
                if ((checkObject >> k) & 1ll) continue; // k bit目が 1 なら無視
                ll sub = checkObject | ((1ll << k) - 1); // 0 ~ k-1 bitをすべて 1 に
                if (sub < A[j]) checkObject |= (1ll << k);
            }
            tmp[j] = checkObject - A[j];
        }
        sort(tmp.begin(), tmp.end());
        ll count = 0;
        for (int j = 0; j < K; j++){
            count += tmp[j];
        }
        if (count <= M) answer += (1ll << i);
    }

    cout << answer << endl;

    return 0;
}