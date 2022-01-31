#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <deque>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N;
    cin >> S;

    deque<int> ans = {N};
    for (int i = N; i > 0; i--){
        if (S[i - 1] == 'R'){
            ans.push_front(i - 1);
        }else{
            ans.push_back(i - 1);
        }
    }
    for (int i = 0; i < N; i++){
        cout << ans[i] << " ";
    }
    cout << ans[N] << endl;
    return 0;
}
