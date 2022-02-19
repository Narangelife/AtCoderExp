#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int H;
    cin >> H;
    long double ans;
    ans = sqrtl((long double)H * (long double)(12800000 + H));
    cout << setprecision(10) <<ans << endl;
    return 0;
}
