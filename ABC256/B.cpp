#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    int koma = 0;
    int P = 0;
    for (int i = 0; i < N; i++){
        cin >> A[i];
        koma += 8;
        for (int j = 0; j < A[i]; j++){
            if (koma & 1){
                P++;
            }
            koma >>= 1;
        }
    }

    cout << P << endl;


    return 0;
}