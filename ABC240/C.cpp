#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> a(N);
    vector<int> b(N);
    vector<int> road(X + 1, -1);
    road[0] = 0;
    for (int i = 0; i < N; i++){
        cin >> a[i] >> b[i];
        for (int j = X; j >= 0; j--){
            if (road[j] == i){
                if (j + a[i] <= X) road[j + a[i]] = i + 1;
                if (j + a[i] <= X) road[j + b[i]] = i + 1;
            }
        }
    }
    if (road[X] == N){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
