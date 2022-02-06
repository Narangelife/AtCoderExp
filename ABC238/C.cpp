#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    long long div = 998244353;
    int inv2 = 499122177;
    long long N;
    cin >> N;
    int digit = to_string(N).length();
    long long ans = 0;
    for (int i = 1; i <= digit; i++){
        if (i != digit){
            long long top = 9 * (long long) pow(10, i - 1);
            top %= div;
            long long tmpSum = (1 + top) * top % div * inv2;
            ans = ans % div + tmpSum % div;
        }else{
            long long top = N - (long long) pow(10, i - 1) + 1;
            top %= div;
            long long tmpSum = (((1 + top) * top % div) * inv2) % div;
            ans = ans % div + tmpSum % div;
        }
    }
    cout << ans % div << endl;

    return 0;
}
