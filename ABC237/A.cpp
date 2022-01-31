#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long N;
    cin >> N;
    long long s = (long long)1 << 31;
    if (-s <= N && N < s){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
