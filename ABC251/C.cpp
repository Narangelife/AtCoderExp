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

struct st{
    string S;
    int T;
};

int main(){
    int N;
    cin >> N;
    vector<st> origin(N);
    map<string, int> mem;
    multimap<int, int> ST;
    set<string> s;
    for (int i = 0; i < N; i++){
        string S;
        int T;
        cin >> S >> T;
        auto it = s.find(S);
        if (it == s.end()){
            //オリジナル
            s.insert(S);
            ST.emplace(T, i+ 1);
            //ST[T] = i + 1;
        }
    }

    auto it = ST.end();
    it--;
    int max = (*it).first;
    int answer = -1;
    for (auto v : ST){
        if (v.first == max){
            answer = v.second;
            break;
        }
    }
    cout << answer << endl;


    return 0;
}