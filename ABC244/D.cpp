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
char S[3];
char T[3];

int main(){
    for (char & i : S){
        cin >> i;
    }
    for (char & i : T){
        cin >> i;
    }

    int sameCount = 0;
    for (int i = 0; i < 3; i++){
        if (S[i] == T[i]){
            sameCount++;
        }
    }

    if (sameCount == 3 || sameCount == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}