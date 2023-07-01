#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int> A(7 * N);
    for (int i = 0; i < 7 * N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < N; i++){
        int answer = 0;
        for (int j = 0; j < 7; j++){
            answer += A[7 * i + j];
        }
        cout << answer << " ";
    }
    return 0;
}