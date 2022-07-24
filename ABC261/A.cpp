#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool line[101];

int main(){
    int L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;

    for (int i = L1; i < R1; i++){
        line[i] = true;
    }

    int answer = 0;
    for (int i = L2; i < R2; i++){
        if (line[i]){
            answer++;
        }
    }

    cout << answer << endl;
    return 0;
}