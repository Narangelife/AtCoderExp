#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int parent[100000];
vector<int> ne(100000, -1);
vector<int> X(100000);
vector<vector<long long>> node(100000, vector<long long>());

void addValue(int oya, int ko){
    node[oya].push_back(X[ko]);
    if (ne[oya] != -1){
        if (oya != 0) addValue(ne[oya], ko);
    }
    return;
}

int main(){
    ne[0] = 0;
    int N, Q;
    cin >> N >> Q;
    for (int i = 0; i < N; i++){
        cin >> X[i];
        node[i].push_back(X[i]);
    }
    for(int i = 0; i < N - 1; i++){
        int A, B;
        cin >> A >> B;
        if (ne[A - 1] != -1){ //1st already has NE
            int tmo = ne[A - 1];
            ne[B - 1] = A - 1;
            addValue(A - 1, B - 1);
        }else{
            int tmo = ne[A - 1];
            ne[A - 1] = B - 1;
            addValue(B - 1, A - 1);
        }
    }
    for (int i = 0; i < N; i++){
        sort(node[i].begin(), node[i].end(), greater<int>());
    }
    for (int i = 0; i < Q; i++){
        int V, K;
        cin >> V >> K;
        cout << node[V - 1][K - 1] << endl;
    }
    return 0;
}
