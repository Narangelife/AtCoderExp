#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll K;
    cin >> K;
    ll N = 1;
    for (ll i = 2; i * i <= K; i++){
        if (K % i == 0){
            ll count = 0;
            while (K % i == 0){
                K /= i;
                count++;
            }
            ll n = 0;
            while (count > 0){
                n += i;
                ll tmp = n;
                while(tmp % i == 0){
                    tmp /= i;
                    count--;
                }
            }
            N = max(N, n);
        }
    }
    N = max(N, K);
    cout << N << endl;
    return 0;
}