#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;

    cin >> a >> b >> c;

    if(c - b > 0) {
        cout << a / (c - b) + 1 << '\n';
    } else cout << -1 << '\n';

    return 0;
}