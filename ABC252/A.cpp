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
    string ch = "abcdefghijklmnopqrstuvwxyz";
    int N;
    cin >> N;
    cout << ch[N - 97] << endl;
    return 0;
}