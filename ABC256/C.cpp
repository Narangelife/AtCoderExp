#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int h[3], w[3];
    for (int &i : h){
        cin >> i;
    }
    for (int &i : w){
        cin >> i;
    }

    /*
     * x y z -> h1
     * p q r -> h2
     * s t u -> h3
     */

    int answer = 0;

    for (int i = 1; i <= 30; i++){ // x
        for (int j = 1; j <= 30; j++){ // y
            int z = h[0] - (i + j);
            if (z <= 0) continue;
            for (int k = 1; k <= 30; k++){ // p
                for (int l = 1; l <= 30; l++){ // q
                    int r = h[1] - (k + l);
                    if (r <= 0) continue;
                    int s = w[0] - (i + k);
                    int t = w[1] - (j + l);
                    if (s <= 0 || t <= 0 || w[2] - (z + r) <= 0) continue;
                    if (s + t + (w[2] - (z + r)) == h[2]) answer++;
                }
            }
        }
    }

    cout << answer << endl;
    return 0;
}