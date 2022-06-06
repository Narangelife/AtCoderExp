#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;

    vector<vector<int>> A(31, vector<int>(31, 0));
    A[0][0] = 1;
    A[1][0] = 1;
    A[1][1] = 1;

    for (int i = 0; i < N; i++){
        for (int j = 0; j <= i; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
        A[i + 1][0] = 1;
        A[i + 1][i + 1] = 1;
        for (int j = 1; j < i + 1; j++){
            A[i + 1][j] = A[i][j - 1] + A[i][j];
        }
    }

    return 0;
}