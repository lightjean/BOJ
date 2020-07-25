#include <iostream>
using namespace std;

int main()
{
    int l, r;
    bool check = false;

    cin >> l >> r;

    if(l == 0 && r == 0) {
        cout << "Not a moose" << '\n';
        check = true;
    } else if(l == r) {
        cout << "Even ";
    } else {
        cout << "Odd ";
    }

    if(check) {
        return 0;
    } else if(l > r) {
        cout << l * 2 << '\n';
    } else {
        cout << r * 2 << '\n';
    }

    return 0;
}