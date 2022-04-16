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
    long long K;
    cin >> N >> K;
    vector<int> A(N);
    vector<long long> Sum(N + 1);
    Sum[0] = 0;
    for (int i = 0; i < N; i++){
        cin >> A[i];
        Sum[i + 1] = Sum[i] + A[i];
    }

    map<long long, int> mp;
    long long answer = 0;
    mp[0] = 0;
    for (int i = 0; i < N; i++){
        mp[Sum[i]]++; //同じ状態がいくつあるか加算
        answer += mp[Sum[i + 1] - K]; // S_l = S_r - K  :  加算が終わった区間の1つ右をS_rとする -> んでS_lを探索
    }

    cout << answer << endl;

    return 0;
}