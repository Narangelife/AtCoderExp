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
    int N, Q;
    cin >> N >> Q;
    vector<int> a(N); // i番目に書かれてる数字
    vector<int> pos(N); // iが書かれてるボールの場所
    for (int i = 0; i < N; i++){
        a[i] = i;
        pos[i] = i;
    }

    for (int i = 0; i < Q; i++){
        int x;
        cin >> x;
        int LPos = pos[x - 1];
        int RPos = (LPos == N - 1) ? LPos - 1 : LPos + 1;
        int RNum = a[RPos];

        a[LPos] = a[RPos];
        a[RPos] = x - 1;

        pos[x - 1] = RPos;
        pos[RNum] = LPos;
    }

    for (int i = 0; i < N; i++){
        cout << a[i] + 1 << " ";
    }
    cout << endl;
    return 0;
}