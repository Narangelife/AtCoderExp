#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end(), greater<int>());
    vector<int> three {A[2], A[1], A[0]};

    ll answer = 0;
    do {
        string tmp = "";
        for (int i = 0; i < 3; i++){
            tmp += to_string(three[i]);
        }
        answer = max(answer, atoll(tmp.c_str()));
    } while (next_permutation(three.begin(), three.end()));
    cout << answer << endl;
    return 0;
}