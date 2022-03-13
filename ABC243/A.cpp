#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int V, A, B, C;
    cin >> V >> A >> B >> C;

    while (true){
        V -= A;
        if (V < 0){
            cout << "F" << endl;
            return 0;
        }

        V -= B;
        if (V < 0){
            cout << "M" << endl;
            return 0;
        }

        V -= C;
        if (V < 0){
            cout << "T" << endl;
            return 0;
        }
    }

    return 0;
}