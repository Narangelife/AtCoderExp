#include <bits/stdc++.h>

using namespace std;
using ll = long long;

char A[1001][1001];

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    bool answer = true;
    for (int i = 0; i < N; i++){
        for (int j = i + 1; j < N; j++){
            switch (A[i][j]){
                case 'W':
                    if (A[j][i] != 'L') answer = false;
                    break;
                case 'L':
                    if (A[j][i] != 'W') answer = false;
                    break;
                case 'D':
                    if (A[j][i] != 'D') answer = false;
                    break;
            }
            if (!answer){
                cout << "incorrect" << endl;
                return 0;
            }
        }
    }
    cout << "correct" << endl;
    return 0;
}