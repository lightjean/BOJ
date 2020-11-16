#include <iostream>
using namespace std;

int main()
{
    int a, b, c, money;
    cin >> a >> b >> c;
    if(a==b&&b==c)
        money = 10000 + a * 1000;
    else if(a==b)
        money = 1000 + a * 100;
    else if(b==c)
        money = 1000 + b * 100;
    else if(c==a)
        money = 1000 + c * 100;
    else money = (a>b ? (a>c ? a : c) : (b>c ? b : c)) * 100;
    cout << money << '\n';
    return 0;
}