#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++){
        cin >> S[i];
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i == j) continue;
            string comp = S[i] + S[j];
            bool frag = true;
            for (int k = 0; k <= comp.size() / 2; k++){
                if (comp[k] != comp[comp.size() - k - 1]){
                    frag = false;
                    break;
                }
            }
            if (frag){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}