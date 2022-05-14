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
    int N, W;
    cin >> N >> W;
    vector<int> A(N);
    vector<bool> answer(W, false);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for (int i = 0; i < N; i++){
        if (A[i] <= W) answer[A[i] - 1] = true;
    }

    for (int i = 0; i < N - 1; i++){
        for (int j = i + 1; j < N; j++){
            if (A[i] + A[j] <= W) answer[A[i] + A[j] - 1] = true;
        }
    }

    for (int i = 0; i < N - 2; i++){
        for (int j = i + 1; j < N - 1; j++){
            for (int k = j + 1; k < N; k++){
                if (A[i] + A[j] + A[k] <= W) answer[A[i] + A[j] + A[k] - 1] = true;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < W; i++){
        if (answer[i]) count++;
    }

    cout << count << endl;

    return 0;
}