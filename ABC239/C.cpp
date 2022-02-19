#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
long long X1, Y1, X2, Y2;

bool search(long long x, long long y){
    long long sx, sy;
    sx = X1 + x;
    sy = Y1 = y;
    if (sx + 1 == X2 && sy + 2 == Y2) return true;
    if (sx + 2 == X2 && sy + 1 == Y2) return true;
    if (sx + 2 == X2 && sy - 1 == Y2) return true;
    if (sx + 1 == X2 && sy - 2 == Y2) return true;
    if (sx - 1 == X2 && sy - 2 == Y2) return true;
    if (sx - 2 == X2 && sy - 1 == Y2) return true;
    if (sx - 2 == X2 && sy + 1 == Y2) return true;
    if (sx - 1 == X2 && sy + 2 == Y2) return true;
    return false;
}

int main(){
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    X1 = x1;
    X2 = x2;
    Y1 = y1;
    Y2 = y2;

    if (search(1, 2)) {
        cout << "Yes" << endl;
        return 0;
    }
    if (search(2, 1)) {
        cout << "Yes" << endl;
        return 0;
    }
    if (search(2, -1)) {
        cout << "Yes" << endl;
        return 0;
    }
    if (search(1, -2)) {
        cout << "Yes" << endl;
        return 0;
    }
    if (search(-1, -2)) {
        cout << "Yes" << endl;
        return 0;
    }
    if (search(-2, -1)) {
        cout << "Yes" << endl;
        return 0;
    }
    if (search(-2, 1)) {
        cout << "Yes" << endl;
        return 0;
    }
    if (search(-1, 2)) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;


    return 0;
}
