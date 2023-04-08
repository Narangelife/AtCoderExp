#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<int> card(N, 0);
    for (int i = 0; i < Q; i++){
        int pre, x;
        cin >> pre >> x;
        switch (pre){
            case 1:
                card[x - 1] += 1;
                break;
            case 2:
                card[x - 1] += 2;
                break;
            case 3:
                if (card[x - 1] >= 2){
                    cout << "Yes" << endl;
                }else{
                    cout << "No" << endl;
                }
                break;
            default:
                break;
        }
    }
    return 0;
}