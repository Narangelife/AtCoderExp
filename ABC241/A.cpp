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

using namespace std;

int main(){
    vector<int> a(10);
    for (int i = 0; i < 10; i++){
        cin >> a[i];
    }
    int display = 0;
    for (int i = 0; i < 3; i++){
        display = a[display];
    }
    cout << display << endl;
    return 0;
}