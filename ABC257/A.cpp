#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, X;
    cin >> N >> X;

    cout << (char)('A' + (ceil(X * 1.0f / N) - 1)) << endl;
    return 0;
}