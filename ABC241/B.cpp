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
    int N, M;
    cin >> N >> M;
    vector<int> A(N, -1);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    bool answer = true;
    for (int i = 0; i < M; i++){
        int b;
        bool frag = false;
        cin >> b;
        for (int j = 0; j < N; j++){
            if (A[j] == b){
                A[j] = -1;
                frag = true;
                break;
            }
        }
        if (frag) continue;
        answer = false;
    }

    if (answer){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}