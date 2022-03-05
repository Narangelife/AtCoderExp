#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;

int H, W;
bool ans = false;
char maze[500][500];
bool isReached[500][500];

void search(int x, int y){
    if (x < 0 || y < 0 || x >= W || y >= H || maze[y][x] == '#') return;
    if (isReached[y][x]) return;

    isReached[y][x] = true;

    if (maze[y][x] == 'g'){
        ans = true;
    }

    search(x + 1, y);
    search(x - 1, y);
    search(x, y + 1);
    search(x, y - 1);
}

int main(){

    /* 深さ優先探索 */
    int Sx, Sy;

    cin >> H >> W;
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            char tmp;
            cin >> tmp;
            maze[i][j] = tmp;
            if (tmp == 's'){
                Sy = i;
                Sx = j;
            }
        }
    }

    search(Sx, Sy);

    if (ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}
