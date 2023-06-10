#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int H, W;
    cin >> H >> W;
    vector S(H, vector<char>(W));
    pair<int, int> p_min = {1000, 1000}, p_max = {-1, -1};
    for (int i = 0; i < H; i ++){
        for (int j = 0; j < W; j++){
            cin >> S[i][j];
            if (S[i][j] == '#'){
                p_min.first = min(p_min.first, i);
                p_min.second = min(p_min.second, j);
                p_max.first = max(p_max.first, i);
                p_max.second = max(p_max.second, j);
            }
        }
    }

    for (int i = p_min.first; i <= p_max.first; i++){
        for (int j = p_min.second; j <= p_max.second; j++){
            if (S[i][j] == '.'){
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }

    return 0;
}