#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, K;
    cin >> N >> K;
    set<ll> lst;
    for (int i = 0; i < N; i++){
        ll A;
        cin >> A;
        lst.insert(A);
    }
    for (int i = 0; i < K; i++){
        if (lst.find(i) == lst.end()){
            cout << i << endl;
            return 0;
        }
    }
    cout << K << endl;
    return 0;
}