#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        scanf("%d,%d", &a, &b);
        cout << a + b << '\n';
    }
    return 0;
}