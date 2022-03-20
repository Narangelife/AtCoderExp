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

using namespace std;

int main(){
    int N;
    string T;
    cin >> N >> T;

    int x = 0, y = 0;
    int rot = 0;
    for (int i = 0; i < N; i++){
        if (T[i] == 'S'){
            switch (rot) {
                case 0:
                    x += 1;
                    break;
                case 1:
                    y -= 1;
                    break;
                case 2:
                    x -= 1;
                    break;
                case 3:
                    y += 1;
                    break;
            }
        }else{
            rot += 1;
            if (rot > 3){
                rot = 0;
            }
        }
    }

    cout << x << " " << y << endl;

    return 0;
}