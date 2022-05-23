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
    int N, K;
    cin >> N >> K;
    vector<int> A(N), B(K);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < K; i++){
        cin >> B[i];
    }

    int maxV = *max_element(A.begin(), A.end());
    for (int i = 0; i < K; i++){
        if (A[B[i] - 1] == maxV) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}