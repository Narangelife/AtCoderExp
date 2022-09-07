#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;
    int answer = 0;
    if (S == "Monday") answer = 5;
    else if (S == "Tuesday") answer = 4;
    else if (S == "Wednesday") answer = 3;
    else if (S == "Thursday") answer = 2;
    else if (S == "Friday") answer = 1;

    cout << answer << endl;
    return 0;
}