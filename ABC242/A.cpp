#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    if (X <= A){
        cout << "1.000000000" << endl;
    }else{
        if (X <= B){
            double chance = (double)C / (B - A);
            cout << chance << endl;
        }else{
            cout << "0.000000000" << endl;
        }
    }
    return 0;
}