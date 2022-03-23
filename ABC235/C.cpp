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
    vector<int> A(N);
    map<int, vector<int>> Th;
    for (int i = 0; i < N; i++){
        cin >> A[i];
        Th[A[i]].push_back(i);
    }
    for (int i = 0; i < Q; i++){
        int x, k;
        cin >> x >> k;
        if (Th[x].size() >= k){
            cout << Th[x][k - 1] + 1 << endl;
        }else{
            cout << "-1" << endl;
        }
    }
    return 0;
}