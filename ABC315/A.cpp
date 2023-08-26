#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;

    char remove[5] = {'a', 'e', 'i', 'o', 'u'};
    string answer;
    for (char v: S){
        bool frag = true;
        for (char w: remove){
            if (v == w){
                frag = false;
                break;
            }
        }
        if (frag){
            answer += v;
        }
    }
    cout << answer << endl;
    return 0;
}