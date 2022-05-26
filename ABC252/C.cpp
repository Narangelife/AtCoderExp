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
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> MaxTime(10, 0);
    vector<vector<int>> SpawnCount(10, vector<int>(10, 0)); // 数字 i は リール j 番目に何回出現しているか
    for (int i = 0; i < N; i++){
        cin >> S[i];
        for (int j = 0; j < 10; j++){
            int n = S[i][j] - '0'; // char -> int
            MaxTime[n] = max(MaxTime[n], SpawnCount[n][j] * 10 + j);
            SpawnCount[n][j]++;
        }
    }

    int answer = *min_element(MaxTime.begin(), MaxTime.end());
    cout << answer << endl;

    return 0;
}