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

struct position{
    int x;
    int y;
};

int main(){
    vector<position> pos(4);
    int x = 0, y = 0;
    for (int i = 0; i < 3; i++){
        cin >> pos[i].x >> pos[i].y;
    }

    if (pos[0].x == pos[1].x){
        x = pos[2].x;
    }else if (pos[0].x == pos[2].x){
        x = pos[1].x;
    }else{
        x = pos[0].x;
    }

    if (pos[0].y == pos[1].y){
        y = pos[2].y;
    }else if (pos[0].y == pos[2].y){
        y = pos[1].y;
    }else{
        y = pos[0].y;
    }

    cout << x << " " << y << endl;

    return 0;
}