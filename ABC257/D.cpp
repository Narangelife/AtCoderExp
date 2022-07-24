#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void sample(vector<int> a){
    for (auto i: a){
        cout << i << endl;
    }
    for (int i = 0; i < a.size(); i++){
        a[i] = i;
    }
    for (auto i: a){
        cout << i << endl;
    }
}

int main(){
    vector<int> a = {1, 2, 3};
    sample(a);
    return 0;
}