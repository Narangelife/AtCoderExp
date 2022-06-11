#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll X, A, D, N;
    cin >> X >> A >> D >> N;

    ll endValue = A + D * (N - 1);
    if (D >= 0){
        if (X >= endValue){
            cout << X - endValue << endl;
            return 0;
        }
        if (X <= A){
            cout << A - X << endl;
            return 0;
        }
    }
    if (D < 0){
        if (X <= endValue){
            cout << endValue - X << endl;
            return 0;
        }
        if (X >= A){
            cout << X - A << endl;
            return 0;
        }
    }

    ll amari = abs((X - A + D) % D);
    double half = abs(D) / 2.0;
    ll answer = (amari <= half) ? amari : abs(D) - amari;
    cout << answer << endl;


    return 0;
}