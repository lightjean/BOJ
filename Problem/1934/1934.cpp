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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, t, ans;

    cin >> t;

    while(t--) {
        cin >> a >> b;

        ans = GCD(a, b);

        cout << a * b / ans << '\n';
    }

    return 0;
}