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

int main(){
    int N;
    cin >> N;
    vector<bool> Value(2 * N + 1, false);

    for (int i = 0; i < 2 * N + 1; i++){
        int index = 0;
        for (int j = 0; j < 2 * N + 1; j++){
            if (!Value[j]){
                index = j;
                break;
            }
        }
        Value[index] = true;
        cout << index + 1 << endl << flush;
        int aoki = 0;
        cin >> aoki;
        if (aoki == 0){
            return 0;
        }
        Value[aoki - 1] = true;
    }

    return 0;
}