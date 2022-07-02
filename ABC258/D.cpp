#include <bits/stdc++.h>

using namespace std;
using ll = long long;

long long dp[200010];

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> A(N), B(N);
    long long Xmin = 9100100100100100100;
    for (int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }
    long long now = 0;
    long long count = 0;
    for (int i = 0; i < N; i++){
        now += A[i] + B[i];
        count++;
        Xmin = (Xmin < now + B[i] * (X - count)) ? Xmin : now + B[i] * (X - count);
        if (count == X) break;
    }
    cout << Xmin << endl;
    return 0;
}