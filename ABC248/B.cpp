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
    long long A, B, K;
    cin >> A >> B >> K;
    int answer = 0;
    while(1){
        if (A >= B){
            break;
        }
        A *= K;
        answer++;
    }
    cout << answer << endl;
    return 0;
}