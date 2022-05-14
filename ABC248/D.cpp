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
    vector<vector<int>> idx(N + 1);
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        idx[i].push_back(a);
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++){
        int L, R, X;
        cin >> L >> R >> X;

    }
    return 0;
}