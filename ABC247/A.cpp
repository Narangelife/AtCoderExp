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
    string S;
    cin >> S;

    char tmp;
    for (int i = 3; i >= 0; i--){
        if (i == 0){
            S[i] = '0';
            continue;
        }
        S[i] = S[i - 1];
    }

    cout << S << endl;
    return 0;
}