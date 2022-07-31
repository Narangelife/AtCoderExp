#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int Y;
    cin >> Y;
    for (int i = Y; i <= 3002; i++){
        if (i % 4 == 2){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}