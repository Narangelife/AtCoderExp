#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> a(M);
    for (int i = 0; i < M; i++){
        cin >> a[i];
    }

    int j = 0;
    stack<int> sta;
    for (int i = 1; i <= N; i++){
        sta.push(i);
        if (M != 0 && i == a[j]){
            j++;
        }else{
            while (!sta.empty()){
                cout << sta.top() << " ";
                sta.pop();
            }
        }
    }
    cout << endl;
    return 0;
}