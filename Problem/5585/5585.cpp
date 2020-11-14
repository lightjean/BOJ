#include <iostream>
using namespace std;

int main() {
    int money, ans = 0;
    cin >> money;
    money = 1000 - money;

    int tmp;
    if (money / 500 > 0) {
        tmp = money / 500;
        ans += tmp;
        money -= 500 * tmp;
    }

    if (money / 100 > 0) {
        tmp = money / 100;
        ans += tmp;
        money -= 100 * tmp;
    }

    if (money / 50 > 0) {
        tmp = money / 50;
        ans += tmp;
        money -= 50 * tmp;
    }

    if (money / 10 > 0) {
        tmp = money / 10;
        ans += tmp;
        money -= 10 * tmp;
    }

    if (money / 5 > 0) {
        tmp = money / 5;
        ans += tmp;
        money -= 5 * tmp;
    }

    ans += money;
    cout << ans << '\n';
    return 0;
}