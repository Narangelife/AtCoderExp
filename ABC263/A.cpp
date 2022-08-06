#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    vector<int> card(13, 0);
    card[A - 1]++;
    card[B - 1]++;
    card[C - 1]++;
    card[D - 1]++;
    card[E - 1]++;
    int count2 = 0, count3 = 0;
    for (int i = 0; i < 13; i++){
        if (card[i] == 2){
            count2++;
        }
        if (card[i] == 3){
            count3++;
        }
    }

    if (count2 == 1 && count3 == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}