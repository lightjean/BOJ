#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, x2;
    double a, b;
    cin >> a >> b;
    x1 = (-2 * a - pow(4 * a * a - 4 * b, 0.5)) / 2;
    x2 = (-2 * a + pow(4 * a * a - 4 * b, 0.5)) / 2;
    if (x1 == x2) cout << x1 << '\n';
    else cout << x1 << " " << x2 << '\n';
    return 0;
}