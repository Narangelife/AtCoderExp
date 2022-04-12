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

long long f(long long a, long long b){
    return a*a*a + a*a*b + a*b*b + b*b*b;
}

int main(){
    long long N; //f >= N
    cin >> N;
    long long answer = 9e18;
    long long a = 0, b = 1000000;
    while (a <= b){
        long long fc = f(a, b);
        if (fc >= N){
            answer = min(answer, fc);
            b--;
        }else{
            a++;
        }
    }

    cout << answer << endl;

    return 0;
}