#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<int>> B(W, vector<int>(H));
    for (int i = 1; i <= H; i++){
        for (int j = 1; j <= W; j++){
            int tmp;
            cin >> tmp;
            B[j - 1][i - 1] = tmp;
        }
    }
    for (int i = 1; i <= W; i++){
        for (int j = 1; j <= H; j++){
            cout << B[i - 1][j - 1] << " ";
        }
        cout << endl;
    }
    return 0;
}
