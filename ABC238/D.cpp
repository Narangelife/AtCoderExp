#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
    int T;
    cin >> T;
    vector<ll> a(T);
    vector<ll> s(T);

    /* x + y = (x xor y) + ((x AND y) << 1) */

    for (int i = 0; i < T; i++){
        cin >> a[i] >> s[i];
        ll xcor = s[i] - (a[i] << 1);
        if (xcor < 0 || (a[i] & xcor) != 0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }


    return 0;
}
