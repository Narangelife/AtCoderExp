#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int H, W;
    cin >> H >> W;
    int answer = 0;
    for (int i = 0; i < H; i++){
        string S;
        cin >> S;
        for (int j = 0; j < W; j++){
            if (S[j] == '#') answer++;
        }
    }
    cout << answer << endl;
    return 0;
}