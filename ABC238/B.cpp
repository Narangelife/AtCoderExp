#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<bool> ans(360);
    int now = 0;
    ans[now] = true;
    for (int i = 0; i < N; i++){
        cin >> A[i];
        now = (A[i] + now) % 360;
        ans[now] = true;
    }

    int count = 0;
    int answer = 0;
    for (int i = 0; i < 360; i++){
        if (ans[i] == false){
            count++;
            if (answer < count){
                answer = count;
            }
        }else{
            count = 0;
        }
    }
    cout << answer + 1 << endl;

    return 0;
}
