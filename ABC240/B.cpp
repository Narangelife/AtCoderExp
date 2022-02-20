#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<bool> a(1000000000, false);
    for (int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        a[tmp - 1] = true;
    }
    int ans = 0;
    for (int i = 0; i < 1000000000; i++){
        if (a[i]) ans++;
    }

    cout << ans << endl;


    return 0;
}
