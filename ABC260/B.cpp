#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    vector<int> A(N), B(N);
    vector<pair<int, int>> Math(N), Eng(N - X), Sum(N - X - Y);
    vector<int> answer;
    for (int i = 0; i < N; i++){
        cin >> A[i];
        A[i] *= -1;
        Math[i].first = A[i];
        Math[i].second = i;
    }
    for (int i = 0; i < N; i++){
        cin >> B[i];
        B[i] *= -1;
    }

    sort(Math.begin(), Math.end());
    for (int i = 0; i < N; i++){
        if (i < X){
            answer.push_back(Math[i].second + 1);
        }else{
            Eng[i - X].first = B[Math[i].second];
            Eng[i - X].second = Math[i].second;
        }
    }
    sort(Eng.begin(), Eng.end());
    for (int i = 0; i < N - X; i++){
        if (i < Y){
            answer.push_back(Eng[i].second + 1);
        }else{
            Sum[i - Y].first = A[Eng[i].second] + B[Eng[i].second];
            Sum[i - Y].second = Eng[i].second;
        }
    }
    sort(Sum.begin(), Sum.end());
    for (int i = 0; i < Z; i++){
        answer.push_back(Sum[i].second + 1);
    }
    sort(answer.begin(), answer.end());
    for (int i: answer){
        cout << i << endl;
    }

    return 0;
}