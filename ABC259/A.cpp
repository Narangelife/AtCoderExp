#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, M, X, T, D;
    cin >> N >> M >> X >> T >> D;
    int begin = T - D * X;
    if (M < X){
        cout << begin + D * M << endl;
    }else{
        cout << T << endl;
    }
    return 0;
}