#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    vector<string> T(M);
    vector<string> ans(N, "No");
    for (int i = 0; i < N; i++){
        cin >> S[i];
    }
    for (int i = 0; i < M; i++){
        cin >> T[i];
    }
    int pos = 0;
    for (int i = 0; i < N; i++){
        if (S[i] == T[pos]){
            ans[i] = "Yes";
            pos++;
        }
    }
    for (int i = 0; i < N; i++){
        cout << ans[i] << endl;
    }

    return 0;
}
