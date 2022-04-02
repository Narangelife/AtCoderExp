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

int main(){
    int N, K, X;
    cin >> N >> K >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
        int n = A[i] / X;
        if (K > 0){
            int m = min(K, n);
            K -= m;
            A[i] -= m * X;
        }
    }

    if (K == 0){
        long long answer = 0;
        for (int i = 0; i < N; i++){
            answer += A[i];
        }
        cout << answer << endl;
        return 0;
    }

    sort(A.begin(), A.end(), greater<int>());
    for (int i = 0; i < N; i++){
        A[i] = 0;
        K--;
        if (K == 0) break;
    }

    long long answer = 0;
    for (int i = 0; i < N; i++){
        answer += A[i];
    }
    cout << answer << endl;

    return 0;
}