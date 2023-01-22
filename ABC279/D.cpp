#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll A, B;
    cin >> A >> B;
    auto func = [&](ll x) -> double{
        return (double)A / sqrt(x + 1) + (double)B * (double)x;
    };
    ll fl = (ll)pow((double)A / (double)(2 * B), 2. / 3.) - 1;
    auto answer = (double)A;
    for (ll i = max(fl - 5, 0LL); i <= min(fl + 5, A / B); i++){
        answer = min(answer, func(i));
    }
    cout << fixed << setprecision(10) << answer << endl;
    return 0;
}