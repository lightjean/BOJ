#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, cnt = 1;
        cin >> a >> b;

        cout << (a * a) / (b * b) << '\n';
    }
    return 0;
}