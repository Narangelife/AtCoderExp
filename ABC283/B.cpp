#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<ll> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++){
        int ope, k;
        cin >> ope >> k;
        if (ope == 1){
            int x;
            cin >> x;
            A[k - 1] = x;
        }else if (ope == 2){
            cout << A[k - 1] << endl;
        }
    }
    return 0;
}