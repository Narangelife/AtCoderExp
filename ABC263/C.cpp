#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N, M;

vector<string> answer;

void fnc(int i, int digit, vector<int> past){
    for (int j = i + 1; j <= M - digit + 1; j++){
        if (digit == 1){
            string ans = "";
            for (int k = 0; k < N - 1; k++){
                ans += (to_string(past[k]) + " ");
            }
            ans += to_string(j);
            answer.push_back(ans);
        }else{
            vector<int> tmp;
            for (int k = 0; k < past.size(); k++){
                tmp.push_back(past[k]);
            }
            tmp.push_back(j);
            fnc(j, digit - 1, tmp);
        }
    }
}

int main(){
    cin >> N >> M;

    vector<int> past = {};
    fnc(0, N, past);
    for (int i = 0; i < answer.size(); i++){
        cout << answer[i] << endl;
    }

    return 0;
}