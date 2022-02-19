#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long X;
    cin >> X;
    long long ans;
    if (X > 0){
        ans = X / 10;
    }else if (X < 0){
        if (X % 10 == 0){
            ans = X / 10;
        }else{
            ans = (X / 10) - 1;
        }
    }else{
        ans = 0;
    }
    cout << ans << endl;
    return 0;
}
