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

bool dp[200001][2]; //X_i が j (A or B) で存在できるか

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < N; i++){
        cin >> B[i];
    }

    dp[1][0] = true;
    dp[1][1] = true;
    for (int i = 1; i < N; i++){
        for (int j = 0; j < 2; j++){
            if (dp[i][j]){
                if (j == 0){ // X_i が A[i - 1] で存在したとき
                    if (-K <= A[i - 1] - A[i] && A[i - 1] - A[i] <= K){ //next A?
                        dp[i + 1][0] = true;
                    }
                    if (-K <= A[i - 1] - B[i] && A[i - 1] - B[i] <= K){ //next B?
                        dp[i + 1][1] = true;
                    }
                }
                if (j == 1){ // X_i が B[i - 1] で存在したとき
                    if (-K <= B[i - 1] - A[i] && B[i - 1] - A[i] <= K){ //next A?
                        dp[i + 1][0] = true;
                    }
                    if (-K <= B[i - 1] - B[i] && B[i - 1] - B[i] <= K){ //next B?
                        dp[i + 1][1] = true;
                    }
                }
            }
        }
    }

    string answer = (dp[N][0] || dp[N][1]) ? "Yes" : "No";
    cout << answer << endl;

    return 0;
}