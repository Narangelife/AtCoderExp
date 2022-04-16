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
    int L, R;
    cin >> L >> R;
    string S;
    cin >> S;
    vector<char> cs(S.size());
    for (int i = 0; i < S.size(); i++){
        if (L - 1 <= i && i <= R - 1){
            cs[R - 1 - (i - (L - 1))] = S[i];
        }else{
            cs[i] = S[i];
        }
    }
    string answer = "";
    for (int i = 0; i < S.size(); i++){
        answer += cs[i];
    }
    cout << answer << endl;
    return 0;
}