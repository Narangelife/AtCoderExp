#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    vector<int> Ord;
    for (int i = 0; i < S.size(); i++){
        if (S[i] == 'o') Ord.push_back(i);
    }
    sort(Ord.begin(), Ord.end());
    string answer;
    for (int i = 0; i < N; i++){
        bool trigger = false;
        for (int j = 0; j < K; j++){
            if (i == Ord[j]) trigger = true;
        }
        if (trigger){
            answer += 'o';
        }else{
            answer += 'x';
        }
    }
    cout << answer << endl;
    return 0;
}