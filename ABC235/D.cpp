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
#define inf 1001001001

using namespace std;

// BFS
int main(){
    int a, N;
    cin >> a >> N;
    int max = (int)pow(10, to_string(N).size());
    vector<int> dist(1000010, inf);
    queue<int> que;

    dist[1] = 0;
    que.push(1);

    while(!que.empty()){
        int i = que.front();
        que.pop();

        // a倍
        if ((long long)i * a < max && dist[i] + 1 < dist[i * a]){ // i * a が最大で 10^12 なので long longを計算
            dist[i * a] = dist[i] + 1;
            que.push(i * a);
        }

        // 移動
        if (i % 10 == 0 || i < 10) continue;
        string s = to_string(i);
        rotate(s.rbegin(), s.rbegin() + 1, s.rend());
        int j = stoi(s);
        if (j < max && dist[i] + 1 < dist[j]){
            dist[j] = dist[i] + 1;
            que.push(j);
        }
    }

    int answer = (dist[N] != inf) ? dist[N] : -1;
    cout << answer << endl;

    return 0;
}