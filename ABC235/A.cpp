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

int Z(char x, char y, char z){
    return 100 * int(x - '0') + 10 * int(y - '0') + int(z - '0');
}

int main(){
    string abc;
    cin >> abc;
    char a = abc[0], b = abc[1], c = abc[2];
    cout << Z(a, b, c) + Z(b, c, a) + Z(c, a, b) << endl;
    return 0;
}