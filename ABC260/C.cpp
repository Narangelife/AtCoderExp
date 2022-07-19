#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll red[12], blue[12];

int main(){
    ll N, X, Y;
    cin >> N >> X >> Y;

    red[1] = 0;
    blue[1] = 1;
    for (int i = 2; i <= N; i++){
        blue[i] = red[i - 1] + blue[i - 1] * Y;
        red[i] = red[i - 1] + blue[i] * X;
    }

    cout << red[N] << endl;
    return 0;
}