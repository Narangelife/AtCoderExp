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
    int N;
    cin >> N;
    string answer = "1";
    vector<string> s(N + 1);
    s[1] = "1";
    for (int i = 2; i <= N; i++){
        s[i] = s[i - 1] + " " + to_string(i) + " " + s[i - 1];
    }

    cout << s[N] << endl;
    return 0;
}