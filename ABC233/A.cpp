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
    int X, Y;
    cin >> X >> Y;
    if (Y >= X){
        cout << ceil((Y - X) / 10.0) << endl;
    }else{
        cout << "0" << endl;
    }
    return 0;
}