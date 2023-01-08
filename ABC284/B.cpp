#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        int N, answer = 0;
        cin >> N;
        for (int j = 0; j < N; j++){
            int A;
            cin >> A;
            if (A % 2 != 0) answer++;
        }
        cout << answer << endl;
    }
    return 0;
}