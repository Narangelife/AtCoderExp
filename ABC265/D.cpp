#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    ll P, Q, R;
    cin >> N >> P >> Q >> R;
    vector<ll> A(N);
    vector<ll> Sum(N + 1, 0);
    for (int i = 0; i < N; i++){
        cin >> A[i];
        Sum[i + 1] = Sum[i] + A[i];
    }
    int w = 3;
    for (int x = 0; x <= N - 3; x++){
        while (w <= N && Sum[w] - Sum[x] <= P + Q + R){
            w++;
        }
        w--;
        if (Sum[w] - Sum[x] == P + Q + R){
            int y = x + 1;
            while(y <= w - 2 && Sum[y] - Sum[x] <= P){
                y++;
            }
            y--;
            if (Sum[y] - Sum[x] != P) continue;
            int z = y + 1;
            while(z <= w - 1 && Sum[z] - Sum[y] <= Q){
                z++;
            }
            z--;
            if (Sum[z] - Sum[y] != Q) continue;
            if (Sum[w] - Sum[z] != R) continue;
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}