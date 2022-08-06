#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int> P(N + 1);
    for (int i = 2; i <= N; i++){
        cin >> P[i];
    }
    int count = 0;
    int now = N;
    while (true){
        now = P[now];
        count++;
        if (now == 1){
            break;
        }
    }

    cout << count << endl;
    return 0;
}