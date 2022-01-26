#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

unsigned int Npow(int a, int n){
    unsigned int ans = 1;
    for (int i = 0; i < n; i++) {
        ans *= a;
    }
    return ans;
}

int main() {
    unsigned long long K;
    cin >> K;

    int re = (int)log2(K + 1);
    unsigned long n = Npow(2, re);
    while (true){
        //int tmp = (int)ceil((K + 1 )/ n);
        unsigned long long tmp = (K + 1 + (n - 1)) / n;
        if ((tmp % 10) % 2 != 0) {
            cout << '0';
        }else{
            cout << '2';
        }
        if (n == 1) break;
        n /= 2;
    }
    cout << endl;
}
