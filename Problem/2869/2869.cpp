#include <iostream>
using namespace std;

int main() {
    int a, b, v, x;
    cin >> a >> b >> v;
    x = (v - a) / (a - b);
    if (x * (a - b) + a >= v) cout << x + 1 << '\n';
    else cout << x + 2 << '\n';
    return 0;
}