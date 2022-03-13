#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
    int N;
    long long X;
    string tS;
    cin >> N >> X;
    cin >> tS;

    stack<char> S;
    for (int i = 0; i < N; i++){
        if (S.empty()){
            S.push(tS[i]);
            continue;
        }
        if (tS[i] == 'U' && (S.top() == 'L' || S.top() == 'R')){
            S.pop();
        }else{
            S.push(tS[i]);
        }
    }
    stack<char> T;
    while(!S.empty()){
        T.push(S.top());
        S.pop();
    }

    while(!T.empty()){
        if (T.top() == 'L'){
            X *= 2;
        }else if (T.top() == 'R'){
            X = X * 2 + 1;
        }else{
            X = (X - (X % 2)) / 2;
        }
        T.pop();
    }

    cout << X << endl;

    return 0;
}