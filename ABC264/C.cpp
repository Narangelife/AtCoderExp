#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int H1, W1;
    cin >> H1 >> W1;
    vector<vector<int>> A(H1, vector<int>(W1));
    for (int i = 0; i < H1; i++){
        for (int j = 0; j < W1; j++){
            cin >> A[i][j];
        }
    }
    int H2, W2;
    cin >> H2 >> W2;
    vector<vector<int>> B(H2, vector<int>(W2));
    for (int i = 0; i < H2; i++){
        for (int j = 0; j < W2; j++){
            cin >> B[i][j];
        }
    }
    vector<vector<int>> tmp;
    vector<int> tmp_sub;
    for (int i = 0; i < (1 << H1); i++){
        for (int j = 0; j < (1 << W1); j++){
            tmp.clear();
            for (int k = 0; k < H1; k++){
                tmp_sub.clear();
                if (i & (1 << k)){
                    for (int l = 0; l < W1; l++){
                        if (j & (1 << l)){
                            tmp_sub.push_back(A[k][l]);
                        }
                    }
                    tmp.push_back(tmp_sub);
                }
            }
            if (tmp.size() == B.size() && equal(tmp.cbegin(), tmp.cend(), B.cbegin())){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}