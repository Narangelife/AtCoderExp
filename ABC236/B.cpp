#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < 4 * N - 1; i++){
        int tmp;
        cin >> tmp;
        A[tmp - 1]++;
    }

    for (int i = 0; i < N; i++){
        if (A[i] == 3){
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}
