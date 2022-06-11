#include <bits/stdc++.h>
#include <iomanip>

using namespace std;
using ll = long long;

struct pos{
    ll X;
    ll Y;
};

int main(){
    int N, K;
    cin >> N >> K;
    vector<bool> A(N, false);
    vector<int> Apos(K);
    for (int i = 0; i < K; i++){
        cin >> Apos[i];
        A[Apos[i] - 1] = true;
    }
    vector<pos> Pos(N);
    for (int i = 0; i < N; i++){
        cin >> Pos[i].X >> Pos[i].Y;
    }
    ll r_max2 = 0;
    for (int i = 0; i < N; i++){
        if (A[i]) continue;
        ll local_min = 9000000000000000000;
        for (int j = 0; j < K; j++){
            int lit_number = Apos[j] - 1;
            ll dx = Pos[i].X - Pos[lit_number].X;
            ll dy = Pos[i].Y - Pos[lit_number].Y;
            local_min = min(local_min, dx * dx + dy * dy);
        }
        r_max2 = max(r_max2, local_min);
    }

    cout << std::setprecision(10) << sqrt(r_max2) << endl;

    return 0;
}