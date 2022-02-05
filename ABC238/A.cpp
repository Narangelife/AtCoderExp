#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;
    if (n < 2 || n > 4){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
