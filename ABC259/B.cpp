#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
using ll = long long;

int main(){
    double a, b, d;
    cin >> a >> b >> d;
    double pi = 3.14159265359;
    double X, Y;
    X = a * cos(d * pi / 180) - b * sin(d * pi / 180);
    Y = b * cos(d * pi / 180) + a * sin(d * pi / 180);
    std::cout << std::fixed;
    cout << std::setprecision(10) << X << " " << Y << endl;
    return 0;
}