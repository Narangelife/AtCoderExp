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
struct pa{
    int x;
    int c;
};
int main(){
    int Q;
    cin >> Q;

    vector<pa> cy;

    for (int i = 0; i < Q; i++){
        char q;
        cin >> q;
        if (q == '1'){
            int x, c;
            cin >> x >> c;
            pa tmp = {x, c};
            cy.push_back(tmp);
        }else{
            int c;
            long long answer = 0;
            cin >> c;
            while (c > 0){
                if (cy[0].c < c){
                    c -= cy[0].c;
                    answer += (long long)cy[0].x * cy[0].c;
                    cy.erase(cy.begin());
                }
                if (cy[0].c >= c){
                    answer += (long long)cy[0].x * c;
                    cy[0].c -= c;
                    c = 0;
                }
            }
            cout << answer << endl;
        }
    }
    return 0;
}