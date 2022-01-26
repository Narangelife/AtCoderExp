#include <iostream>
#include <vector>

int fun(int t){
    return t * t + 2 * t + 3;
}

int main() {
    int t = 0;
    std::cin >> t;

    int ans = fun(fun(fun(t) + t) + fun(fun(t)));
    std::cout << ans << std::endl;
}
