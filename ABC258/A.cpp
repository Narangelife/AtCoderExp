#include <bits/stdc++.h>
#include <iomanip>

using namespace std;
using ll = long long;

int main(){
    int K;
    cin >> K;
    int H = 21 + (K / 60);
    int M = K % 60;
    cout << setfill('0') << std::right << std::setw(2) << H;
    cout << ":";
    cout << setfill('0') << std::right << std::setw(2) << M << endl;
    return 0;
}