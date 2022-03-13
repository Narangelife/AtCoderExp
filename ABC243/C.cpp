#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <map>
using namespace std;

struct pos{
    int x;
    int y;
};

int main(){
    int N;
    cin >> N;
    vector<pos> P(N);
    for (int i = 0; i < N; i++){
        cin >> P[i].x >> P[i].y;
    }
    string S;
    cin >> S;

    // In each y pos
    map<int, int> right, left;
    for (int i = 0; i < N; i++){
        if (S[i] == 'R'){
            if (left.count(P[i].y) && P[i].x <= left[P[i].y]){
                cout << "Yes" << endl;
                return 0;
            }
            if (!right.count(P[i].y) || P[i].x < right[P[i].y]){
                right[P[i].y] = P[i].x;
            }
        }else{
            if (right.count(P[i].y) && P[i].x >= right[P[i].y]){
                cout << "Yes" << endl;
                return 0;
            }
            if (!left.count(P[i].y) || P[i].x > left[P[i].y]){
                left[P[i].y] = P[i].x;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}