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

vector<vector<long long>> a;
long long N, X;
long long answer = 0;

void f(long long l, long long in){
    if (l == N){
        if (X == in){
            answer++;
        }
        return;
    }else{
        for (long long val: a[l]){
            if (in * val > X) continue;
            f(l + 1, in * val);
        }
    }
}

int main(){
    cin >> N >> X;
    a.resize(N);
    for (long long i = 0; i < N; i++){
        long long L;
        cin >> L;
        a[i].resize(L);
        for (long long j = 0; j < L; j++){
            cin >> a[i][j];
        }
    }

    f(0, 1);
    cout << answer << endl;


    return 0;
}