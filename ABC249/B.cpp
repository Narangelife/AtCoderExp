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

    bool Cap = false;
    bool Low = false;

    map<char, bool> CharCheck;
    string list = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for (char c: list){
        list[c] = false;
    }

    for (char c: S){
        if (islower(c)) Low = true;
        if (!islower(c)) Cap = true;
        if (list[c]){
            cout << "No" << endl;
            return 0;
        }else{
            list[c] = true;
        }
    }

    if (Low && Cap){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}