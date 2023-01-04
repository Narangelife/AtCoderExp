#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll num[1000]; // 5個要素

int main() {
    ll x, k;
    cin >> x >> k;
//    ll size = to_string(x).length();
    string tmp = to_string(x);
    int a[1];
    cout << a[1];
    ll size = tmp.size();
    cout << size << endl;
    ll num2 = x;
    for(int i = 0 ; i < 4 ; i++){
        num[i] = num2 % 10; // index 0 ~ 3: 4つ
        num2 /= 10;
    }
    for(int i = 0 ; i < k ; i++){
        if(num[i] > 4){
            num[i] = 0;
            num[i+1] += 1;
        }else{
            num[i] = 0;
        }
    }
    ll ans =0;
    for(int i  = 0 ; i < 4+1 ; i++){
        ans += num[i]*((ll)pow(10 ,i));
    }

    cout << ans;
    return 0;
}