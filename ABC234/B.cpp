#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>

struct vec2{
    int x;
    int y;
};

int main() {
    int N;
    std::cin >> N;
    std::vector<vec2> pos(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> pos[i].x >> pos[i].y;
    }

    double ans = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            double dist = sqrt(pow(pos[i].x - pos[j].x, 2) + pow(pos[i].y - pos[j].y, 2));
            ans = (dist > ans) ? dist : ans;
        }
    }


    std::cout << std::fixed << std::setprecision(10) << ans << std::endl;
}
