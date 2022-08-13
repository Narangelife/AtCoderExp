#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int R, C;
    vector<string> mat;
    mat.push_back("###############");
    mat.push_back("#.............#");
    mat.push_back("#.###########.#");
    mat.push_back("#.#.........#.#");
    mat.push_back("#.#.#######.#.#");
    mat.push_back("#.#.#.....#.#.#");
    mat.push_back("#.#.#.###.#.#.#");
    mat.push_back("#.#.#.#.#.#.#.#");
    mat.push_back("#.#.#.###.#.#.#");
    mat.push_back("#.#.#.....#.#.#");
    mat.push_back("#.#.#######.#.#");
    mat.push_back("#.#.........#.#");
    mat.push_back("#.###########.#");
    mat.push_back("#.............#");
    mat.push_back("###############");
    cin >> R >> C;
    string answer = (mat[R - 1][C - 1] == '#') ? "black" : "white";
    cout << answer << endl;


    return 0;
}