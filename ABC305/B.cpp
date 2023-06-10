#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int width[] = {3, 1, 4, 1, 5, 9};

int main(){
    char p, q;
    cin >> p >> q;
    int l = min(p - 'A', q - 'A');
    int r = max(p - 'A', q - 'A');

    vector<int> sum(7, 0);
    for (int i = 0; i < 6; i++){
        sum[i + 1] = sum[i] + width[i];
    }

    cout << sum[r] - sum[l] << endl;

    return 0;
}