#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int H, W;
    cin >> H >> W;
    vector S(W, vector<char>(H)), T(W, vector<char>(H));
    for (int i = 0; i < H; i++){
        string tmp;
        cin >> tmp;
        for (int j = 0; j < W; j++){
            S[j][i] = tmp[j];
        }
    }
    for (int i = 0; i < H; i++){
        string tmp;
        cin >> tmp;
        for (int j = 0; j < W; j++){
            T[j][i] = tmp[j];
        }
    }
    sort(S.begin(), S.end());
    sort(T.begin(), T.end());

    if (S == T){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}