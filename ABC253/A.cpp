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
    int a, b, c;
    cin >> a >> b >> c;
    string answer = (a <= b && b <= c) || (a >= b && b >= c) ? "Yes" : "No";
    cout << answer << endl;
    return 0;
}