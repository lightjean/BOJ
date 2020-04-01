#include <iostream>
using namespace std;

int GCD(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return GCD(b, a%b);
    }
}

int main()
{
    int a, b, ans;

    cin >> a >> b;
    ans = GCD(a, b);

    cout << ans << '\n' << a * b / ans << '\n';
    return 0;
}