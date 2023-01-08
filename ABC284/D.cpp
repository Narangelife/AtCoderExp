#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        ll N;
        cin >> N;
        ll max_prime = 0;
        for (ll j = 2; j * j * j <= N; j++){
            if (N % j == 0){
                max_prime = j;
                break;
            }
        }
        ll p, q;
        if ((N / max_prime) % max_prime == 0){
            p = max_prime;
            q = N / max_prime / max_prime;
        }else{
            p = (ll)sqrt(N / max_prime);
            q = max_prime;
        }
        cout << p << " " << q << endl;
    }
    return 0;
}