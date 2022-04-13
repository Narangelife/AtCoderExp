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
    vector<int> P(N);
    priority_queue<int, vector<int>, greater<>> que;
    for (int i = 0; i < N; i++){
        cin >> P[i];
    }
    for (int i = 0; i < K; i++){
        que.push(P[i]);
    }
    cout << que.top() << endl;
    for (int i = K; i < N; i++){
        if (P[i] > que.top()){
            que.pop();
            que.push(P[i]);
        }
        cout << que.top() << endl;
    }

    return 0;
}