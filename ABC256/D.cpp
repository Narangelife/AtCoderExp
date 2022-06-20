#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int sec[200001];

// imos法

int main(){
    int N;
    cin >> N;
    int Lmin = 200001;
    int Rmax = 0;
    vector<int> L(N), R(N);
    for (int i = 0; i < N; i++){
        cin >> L[i] >> R[i];
        sec[L[i]]++;
        sec[R[i]]--;
        Lmin = min(Lmin, L[i]);
        Rmax = max(Rmax, R[i]);
    }

    for (int i = Lmin; i <= Rmax; i++){
        sec[i] += sec[i - 1];
    }

    for (int i = Lmin; i <= Rmax; i++){
        if (sec[i - 1] == 0 && sec[i] != 0){
            cout << i << " ";
        }
        if (sec[i] != 0 && sec[i + 1] == 0){
            cout << i + 1 << endl;
        }
    }

    return 0;
}