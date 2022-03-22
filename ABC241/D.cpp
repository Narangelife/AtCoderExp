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
    multiset<long long> S;
    for (int i = 0; i < Q; i++){
        int q, k;
        long long x;
        cin >> q >> x;
        if (q == 1){
            S.insert(x);
            continue;
        }
        cin >> k;
        if (q == 2){
            bool frag = false;
            auto itr = S.upper_bound(x);
            for (int j = 0; j < k; j++){
                if (itr == S.begin()) {
                    frag = true;
                    break;
                }
                itr--;
            }
            long answer = frag ? -1 : *itr;
            cout << answer << endl;
        }
        if (q == 3){
            bool frag = false;
            auto itr = S.lower_bound(x);
            if (itr == S.end()){
                frag = true;
            }else{
                for (int j = 0; j < k - 1; j++){
                    itr++;
                    if (itr == S.end()) {
                        frag = true;
                        break;
                    }
                }
            }
            long answer = frag ? -1 : *itr;
            cout << answer << endl;
        }
    }
    return 0;
}