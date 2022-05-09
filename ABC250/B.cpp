#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <set>

using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    for (int i = 0; i < N; i++){ // y
        char a, b;
        if (i % 2){
            a = '.';
            b = '#';
        }else{
            a = '#';
            b = '.';
        }
        for (int l = 0; l < A; l++){
            for (int j = 0; j < N; j++){ // x
                if (j % 2){
                    for (int k = 0; k < B; k++) cout << a;
                }else{
                    for (int k = 0; k < B; k++) cout << b;
                }
            }
            cout << endl;
        }
    }
    return 0;
}