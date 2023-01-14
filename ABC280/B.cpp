#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N; i++){
        int S;
        cin >> S;
        cout << S - sum << " ";
        sum += S - sum;
    }
    cout << endl;
    return 0;
}