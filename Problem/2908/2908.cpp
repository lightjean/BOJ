#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0;

    cin >> a >> b;

    c = 100 * (a % 10) + (a % 100 - a % 10) + (a / 100);
    d = 100 * (b % 10) + (b % 100 - b % 10) + (b / 100);

    if(c > d) cout << c << '\n';
    else cout << d << '\n';

    return 0;
}