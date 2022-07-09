#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string S, T;
    cin >> S >> T;

    vector<pair<char, int>> s;
    int l = S.size();
    while(l > 0){
        if (l != 1 && S[S.size() - l] == S[S.size() - l + 1]){
            s.push_back({S[S.size() - l], 0});
            char tmp = S[S.size() - l];
            while(true){
                s[s.size() - 1].second++;
                if (S[S.size() - l + 1] != tmp){
                    l--;
                    break;
                }
                l--;
            }
        }else{
            s.push_back({S[S.size() - l], 1});
            l--;
        }
    }

    vector<pair<char, int>> t(0);
    l = T.size();
    while(l > 0){
        if (l != 1 && T[T.size() - l] == T[T.size() - l + 1]){
            t.push_back({T[T.size() - l], 0});
            char tmp = T[T.size() - l];
            while(true){
                t[t.size() - 1].second++;
                if (T[T.size() - l + 1] != tmp){
                    l--;
                    break;
                }
                l--;
            }
        }else{
            t.push_back({T[T.size() - l], 1});
            l--;
        }
    }

    if (s.size() != t.size()){
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < s.size(); i++){
        if (s[i].first == t[i].first && ((s[i].second <= t[i].second && s[i].second >= 2) || (s[i].second == 1 && s[i].second == t[i].second))) {
            continue;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}