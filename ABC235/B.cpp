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
#include <set>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; i++){
        cin >> H[i];
    }
    int answer = H[0];
    for (int i = 1; i < N; i++){
        if (H[i] > answer){
            answer = H[i];
            continue;
        }
        break;
    }
    cout << answer << endl;
    return 0;
}