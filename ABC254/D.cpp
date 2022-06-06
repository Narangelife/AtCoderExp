#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;

    ll answer = 0;
    for (int i = 1; i <= N; i++){
        ll k = i;
        for (int j = 2; j * j <= k; j++){
            while (!(k % (j * j))){
                k /= j * j;
            }
        }
        for (int j = 1; k * j * j <= N; j++){
            answer++;
        }
    }

    cout << answer << endl;
    return 0;
}