#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    vector<char> ans(s.size());
    for (int i = 0; i < s.size(); i++){
        ans[i] = s[i];
    }
    sort(ans.begin(), ans.end());

    for (int i = 0; i < s.size(); i++){
        cout << ans[i];
    }
    cout << endl;

    return 0;
}