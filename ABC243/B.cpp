#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < N; i++){
        cin >> B[i];
    }

    int m = 0, n = 0;
    vector<bool> search(1000000000, false);
    for (int i = 0; i < N; i++){
        if (A[i] == B[i]){
            m++;
            continue;
        }
        if (search[A[i] - 1]){
            n++;
        }else{
            search[A[i] - 1] = true;
        }
        if (search[B[i] - 1]){
            n++;
        }else{
            search[B[i] - 1] = true;
        }
    }

    cout << m << endl;
    cout << n << endl;

    return 0;
}