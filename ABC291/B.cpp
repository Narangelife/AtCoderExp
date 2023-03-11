#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int> X(5 * N);
    for (int i = 0; i < 5 * N; i++) cin >> X[i];
    sort(X.begin(), X.end());
    double sum = 0;
    for (int i = N; i < 4 * N; i++) sum += X[i];
    cout << fixed;
    cout << setprecision(10) << sum / (3 * N) << endl;
    return 0;
}