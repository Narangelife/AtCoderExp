#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    int FI = 0, LI = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] != 'a') break;
        FI++;
        if (i == s.size() - 1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    for (int i = 0; i < s.size(); i++){
        if (s[s.size() - 1 - i] != 'a') break;
        LI++;
    }
    //cout << "FI: " << FI << ", LI: " << LI << endl;
    if (FI > LI){
        cout << "No" << endl;
        return 0;
    }
    for (int i = FI + 1; i <= (s.size() - (LI - FI)) / 2.0; i++){
        if (s[i - 1] != s[(s.size() - (LI - FI)) - (i - 1) - 1]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
