#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(long long N){
    if (N < 2) return false;
    for (long long i = 2; i * i <= N; i++){
        if (N % i == 0) return false;
    }
    return true;
}


int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    for (int i = A; i <= B; i++){ //Takahashi
        bool Afrag = false;
        for (int j = C; j <= D; j++){ //Aoki
            int sum = i + j;
            if (isPrime(sum)) {
                Afrag = true;
                break;
            }
        }
        if (!Afrag){
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;
    return 0;
}
