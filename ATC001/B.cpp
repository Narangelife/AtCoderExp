#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;

// Number of parent
int par[200000];

int root(int x){
    if (par[x] == x){
        return x;
    }else{
        return par[x] = root(par[x]);
    }
}

int main(){

    /* Union-Find 木 */

    // Initialize
    int N, Q;
    cin >> N >> Q;
    for (int i = 0; i < N; i++){
        par[i] = i;
    }

    for (int i = 0; i < Q; i++){
        int P, A, B;
        cin >> P >> A >> B;
        if (P == 0){
            // Connect vertex
            if (par[root(A)] != par[root(B)]){
                par[root(B)] = root(A);
            }
        }else{
            if (par[root(A)] == par[root(B)]){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
