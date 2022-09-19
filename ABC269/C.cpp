#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll N;
    cin >> N;
    int bit_count = 0;
    vector<int> bit_memory;
    for (int i = 0; i < 60; i++){
        if ((N & (1ll << i)) > 0){
            bit_count++;
            bit_memory.push_back(i);
        }
    }
    for (ll i = 0; i < (1ll << bit_count); i++){
        ll output = 0;
        for (int j = 0; j < 15; j++){
            if ((i & (1 << j)) > 0){
                output += (1ll << bit_memory[j]);
            }
        }
        cout << output << endl;
    }
    return 0;
}