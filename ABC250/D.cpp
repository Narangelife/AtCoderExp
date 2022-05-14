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

// 素数のvectorを返します
vector<int> getPrime(int maxValue){
    vector<int> primes;
    vector<int> lpf(maxValue + 1, 0);
    for (int i = 2; i<= maxValue; i++){
        if (lpf[i] == 0){
            lpf[i] = i;
            primes.push_back(i);
        }
        for (int p : primes){
            int mul = p * i;
            if (mul > maxValue || p > lpf[i]) break;
            lpf[mul] = p;
        }
    }
    return primes;
}

int main(){
    long long N;
    cin >> N;

    vector<int> primes = getPrime((int)cbrt(N));

    return 0;
}