#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool dp[51][10001];

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }

    dp[0][0] = true;
    for (int i = 0; i < N; i++){ //硬貨iについて
        for (int j = 0; j <= X; j++){ //硬貨追加後の金額
            for (int k = 0; k <= B[i]; k++){ //追加枚数
                if (j >= A[i] * k){ //新しい硬貨を追加する場合
                    if (dp[i][j - A[i] * k]) dp[i + 1][j] = true;
                }
            }
        }
    }

    if (dp[N][X]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}