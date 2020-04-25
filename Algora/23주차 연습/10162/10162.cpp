#include <iostream>
using namespace std;

int main()
{
    int t, a = 0, b = 0, c = 0;

    cin >> t;

    if(t % 10 != 0) {
        cout << -1 << '\n';
        return 0;
    } else {
        a += t / 300;
        b += (t % 300) / 60;
        c += ((t % 300) % 60) / 10;
    }

    cout << a << " " << b << " " << c << '\n';
    return 0;
}