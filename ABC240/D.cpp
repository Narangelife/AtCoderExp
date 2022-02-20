#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

int main(){
    int N;
    cin >> N;
    stack<int> ball;
    vector<int> now(N, 0);
    int count = 0;
    int observe = 0;
    for (int i = 0; i < N; i++){
        int input;
        cin >> input;
        if (input != observe){
            count = 1;
            observe = input;
            now[ball.size()]++;
            ball.push(input);
        }else{
            count++;
            now[ball.size()] = now[ball.size() - 1] + 1;
            ball.push(input);
            if (count == observe){
                for (int j = 0; j < observe; j++){
                    now[ball.size() - 1] = 0;
                    ball.pop();
                }
                if (ball.empty()){
                    observe = 0;
                    count = 0;
                }else{
                    observe = ball.top();
                    count = now[ball.size() - 1];
                }
            }
        }
        cout << ball.size() << endl;
    }
    return 0;
}
