#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int X, Y, N;
    cin >> X >> Y >> N;

    int y = N / 3;
    int answer = min(X * N, y * Y + X * (N % 3));
    cout << answer << endl;
    return 0;
}