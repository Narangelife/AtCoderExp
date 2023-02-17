#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    int agree = 0;
    for (int i = 0; i < N; i++){
        string S;
        cin >> S;
        if (S == "For") agree++;
    }
    string answer = (N - 1) / 2 < agree ? "Yes": "No";
    cout << answer << endl;
    return 0;
}