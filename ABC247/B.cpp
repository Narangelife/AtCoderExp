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
    vector<string> s(N), t(N);
    for (int i = 0; i < N; i++){
        cin >> s[i] >> t[i];
    }

    for (int i = 0; i < N; i++){
        bool sb = false, tb = false;
        for (int j = 0; j < N; j++){
            if (i == j) continue;
            if (s[i] == s[j] || s[i] == t[j]) sb = true;
            if (t[i] == s[j] || t[i] == t[j]) tb = true;
        }
        if (sb && tb){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}