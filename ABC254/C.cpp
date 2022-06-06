#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    vector<vector<int>> Split(K);
    vector<int> Answer(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
        Split[i % K].push_back(A[i]);
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < K; i++){
        sort(Split[i].begin(), Split[i].end());
    }

    for (int i = 0; i < N; i++){
        int a = A[i];
        int dummy = Split[i % K].front();
        Split[i % K].erase(Split[i % K].begin());
        if (a != dummy){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}