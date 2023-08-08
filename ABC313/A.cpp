#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; i++){
        cin >> P[i];
    }

    int tmp = -1;
    for (int i = 1; i < N; i++){
        if (P[i] - P[0] > tmp){
            tmp = P[i] - P[0];
        }
    }

    cout << tmp + 1 << endl;
    return 0;
}