#include <bits/stdc++.h>

using namespace std;
using ll = long long;

char maze[101][101];
int answer[101][101];

int main(){
    int H, W;
    cin >> H >> W;
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            cin >> maze[i][j];
        }
    }

    for (int i = H - 1; i >= 0; i--){
        for (int j = W - 1; j >= 0; j--){
            if (maze[i][j] == '#') continue;
            answer[i][j] = max(answer[i][j + 1], answer[i + 1][j]) + 1;
        }
    }
    cout << answer[0][0] << endl;
    return 0;
}