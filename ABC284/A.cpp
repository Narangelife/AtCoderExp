#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++){
        cin >> S[i];
    }
    reverse(S.begin(), S.end());
    for (int i = 0; i < N; i++){
        cout << S[i] << endl;
    }
    return 0;
}