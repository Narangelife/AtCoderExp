#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<char>> G(H, vector<char>(W));
    vector<vector<bool>> frag(H, vector<bool>(W, false));
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            cin >> G[i][j];
        }
    }
    int h = 0, w = 0;
    while(true){
        if (frag[h][w]){
            cout << "-1" << endl;
            return 0;
        }
        frag[h][w] = true;
        switch (G[h][w]){
            case 'U':
                if (h == 0){
                    cout << h + 1 << " " << w + 1 << endl;
                    return 0;
                }
                h--;
                break;
            case 'D':
                if (h == H - 1){
                    cout << h + 1 << " " << w + 1 << endl;
                    return 0;
                }
                h++;
                break;
            case 'L':
                if (w == 0){
                    cout << h + 1 << " " << w + 1 << endl;
                    return 0;
                }
                w--;
                break;
            case 'R':
                if (w == W - 1){
                    cout << h + 1 << " " << w + 1 << endl;
                    return 0;
                }
                w++;
                break;
        }
    }

    return 0;
}