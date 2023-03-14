#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    string S;
    cin >> N;
    cin >> S;

    set<pair<int, int>> pos_memory;
    pair<int, int> now(0, 0);
    pos_memory.insert(now);
    for (int i = 0; i < N; i++){
        switch (S[i]) {
            case 'R':
                now.first++;
                break;
            case 'L':
                now.first--;
                break;
            case 'U':
                now.second++;
                break;
            case 'D':
                now.second--;
                break;
        }
        if (pos_memory.find(now) == pos_memory.end()){
            pos_memory.insert(now);
        }else{
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}