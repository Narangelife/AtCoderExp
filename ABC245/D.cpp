#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <set>

using namespace std;
int A[101];
int B[101];
int C[202];

int main(){
    int N, M;
    cin >> N >> M;
    for (int i = 0; i <= N; i++){
        cin >> A[i];
    }
    for (int i = 0; i <= N + M; i++){
        cin >> C[i];
    }
    int notZeroIndex = 0;
    for (int i = 0; i <= N; i++){
        if (A[i] != 0){
            B[0] = C[i] / A[i];
            notZeroIndex = i;
            break;
        }
    }
    cout << B[0] << " ";
    for (int i = 1; i <= M; i++){
        int ci = C[i + notZeroIndex];
        for (int j = 0; j <= i + notZeroIndex; j++){
            if (j != notZeroIndex){
                ci -= A[j] * B[i + notZeroIndex - j];
            }
        }
        B[i] = ci / A[notZeroIndex];
        cout << B[i] << " ";
    }

    cout << endl;

    return 0;
}