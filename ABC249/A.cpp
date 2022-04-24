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

int main(){
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;

    int tak = 0, aok = 0;
    tak += (X / (A + C)) * (A * B);
    tak += (X % (A + C) > A) ? A * B : (X % (A + C)) * B;
    aok += (X / (D + F)) * (D * E);
    aok += (X % (D + F) > D) ? D * E : (X % (D + F)) * E;

    string answer = (aok > tak) ? "Aoki" : (aok < tak) ? "Takahashi" : "Draw";
    cout << answer << endl;
    return 0;
}