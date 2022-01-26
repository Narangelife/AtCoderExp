#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> A(2 * N - 1, vector<int>(2 * N, -1));
    for (int i = 0; i < 2 * N - 1; i++){
        for (int j = i + 1; j < 2 * N; j++){
            cin >> A[i][j];
        }
    }


    return 0;
}
