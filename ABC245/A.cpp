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
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if (A < C){
        cout << "Takahashi" << endl;
    }else if (A == C && B <= D){
        cout << "Takahashi" << endl;
    }else{
        cout << "Aoki" << endl;
    }
    return 0;
}