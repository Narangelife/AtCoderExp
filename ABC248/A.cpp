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

    vector<bool> a(10, false);

    for (int i = 0; i < 9; i++){
        int tmp = S[i] - '0';
        a[tmp] = true;
    }

    for (int i = 0; i < 10; i++){
        if (!a[i]){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}