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

int main(){
    int Q;
    cin >> Q;
    multiset<int> S;
    for (int i = 0 ; i < Q; i++){
        int query;
        cin >> query;
        int x, c, count;
        switch (query) {
            case 1:
                cin >> x;
                S.insert(x);
                break;
            case 2:
                cin >> x >> c;
                while(c-- && S.find(x) != S.end()){
                    S.erase(S.find(x));
                }
                break;
            case 3:
                auto fi = S.begin();
                auto en = S.rbegin();
                int vf = *fi;
                int ve = *en;
                cout << ve - vf << endl;
                break;
        }
    }

    return 0;
}