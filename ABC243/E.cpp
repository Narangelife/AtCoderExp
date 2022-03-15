#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <algorithm>
#include <numeric>

#define inf 1000000000000000;

using namespace std;

long long d[300][300]; //無向グラフ

struct vert{
    int a;
    int b;
    int c;
};

int main(){
    int N, M;
    cin >> N >> M;
    vector<vert> V(M);
    //初期化
    for (int i = 0; i < 300; i++){
        for (int j = 0; j < 300; j++){
            d[i][j] = inf;
        }
    }
    //入力
    for (int i = 0; i < M; i++){
        int A, B, C;
        cin >> A >> B >> C;
        d[A - 1][B - 1] = d[B - 1][A - 1] = C;
        V[i] = {
                A - 1,
                B - 1,
                C
        };
    }

    //ワーシャルフロイド法
    for (int i = 0; i < N; i++){ //経由地
        for (int j = 0; j < N; j++){ //始点
            for (int k = 0; k < N; k++){ //終点
                d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < M; i++){
        int unused = 0;
        for (int j = 0; j < N; j++){
            if (unused == 0 && d[V[i].a][j] + d[j][V[i].b] <= V[i].c){
                unused = 1;
            }
        }
        answer += unused;
    }
    cout << answer << endl;

    return 0;
}
