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
    int A, B;
    cin >> A >> B;

    double det = sqrt(A * A + B * B);
    double x = A / det;
    double y = B / det;
    std::cout << std::fixed;
    cout << std::setprecision(6) << x << " " << y << endl;
    return 0;
}