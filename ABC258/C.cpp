#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, Q;
    string S;
    cin >> N >> Q;
    cin >> S;

    int head = 0;
    for (int i = 0; i < Q; i++){
        int query, x;
        cin >> query >> x;
        if (query == 1){
            head = (head + N - x) % N;
        }else{
            int index = (head + x - 1 + N) % N;
            cout << S[index] << endl;
        }
    }
    return 0;
}