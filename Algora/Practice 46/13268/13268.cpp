#include <iostream>
using namespace std;

int main() {
    int n, ans;
    cin >> n;
    n %= 100;

    if (n <= 10) {
        if (n == 0 || n == 10) ans = 0;
        else ans = 1;
    }
    else if (n > 10 && n <= 30) {
        n -= 10;
        if (n == 20) ans = 0;
        else if (n >= 6 && n <= 14) ans = 2;
        else ans = 1;
    }
    else if (n > 30 && n <= 60) {
        n -= 30;
        if (n == 30) ans = 0;
        else if (n >= 11 && n <= 19) ans = 3;
        else if ((n >= 6 && n <= 10) || (n >= 20 && n <= 24)) ans = 2;
        else ans = 1;
    }
    else if (n > 60 && n <= 99) {
        n -= 60;
        if (n >= 16 && n <= 24) ans = 4;
        else if ((n >= 11 && n <= 15) || (n >= 25 && n <= 29)) ans = 3;
        else if ((n >= 6 && n <= 10) || (n >= 30 && n <= 34)) ans = 2;
        else ans = 1;
    }
    cout << ans << '\n';
    return 0;
}