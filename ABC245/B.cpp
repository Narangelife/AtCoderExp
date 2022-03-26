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
bool A[2001];

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        A[tmp] = true;
    }

    int answer = 0;
    for (int i = 0; i <= 2000; i++){
        if (!A[i]){
            answer = i;
            break;
        }
    }

    cout << answer << endl;
    return 0;
}