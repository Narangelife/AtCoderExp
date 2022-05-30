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
    long long N, A, B;
    cin >> N >> A >> B;
    long long nA = N / A;
    long long nB = N / B;
    long long nAB = N / lcm(A, B);
    long long answer = 0;
    answer -= A * (1 + nA) * nA / 2;
    answer -= B * (1 + nB) * nB / 2;
    answer += lcm(A, B) * (1 + nAB) * nAB / 2;
    answer += (1 + N) * N / 2;

    cout << answer << endl;

    return 0;
}