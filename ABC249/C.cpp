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
    vector<string> S(N);
    for (int i = 0; i < N; i++){
        cin >> S[i];
    }

    int answer = 0;

    // bit 全探索
    // 選択のフラグ立て : i
    for (int i = 0; i < (1 << N); i++){
        vector<int> count(26, 0);
        // 各フラグの回収
        for (int j = 0; j < N; j++){
            if ((i >> j) & 1){
                for (char k : S[j]){
                    count[k - 'a']++;
                }
            }
        }
        int tmp = 0;
        for (int j = 0; j < 26; j++){
            if (count[j] == K) tmp++;
        }
        answer = max(answer, tmp);
    }

    cout << answer << endl;

    return 0;
}