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

using namespace std;

string S[1001];
int vec[4][2] = {{1, 0}, {0, -1}, {1, 1}, {1, -1}};

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> S[i];
    }

    for (int i = 0; i < N; i++){ //下
        for (int j = 0; j < N; j++){ //右
            for (int k = 0; k < 4; k++){ //方向数
                int count = 0;
                int x = i, y = j;
                int dx = vec[k][0], dy = vec[k][1];
                bool frag = true;
                for (int l = 0; l < 6; l++){ //連続数
                    if (x < 0 || x >= N || y < 0 || y >= N){
                        frag = false;
                        break;
                    }
                    if (S[x][y] == '#') count++;
                    x += dx;
                    y += dy;
                }
                if (frag && count >= 4){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}