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
    string S;
    cin >> S;
    string answer = "";

    for (int i = 0; i < 6 / S.length(); i++){
        answer += S;
    }

    cout << answer << endl;
    return 0;
}