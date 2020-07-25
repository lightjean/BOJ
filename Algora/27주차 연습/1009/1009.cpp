#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;

    cin >> t;

    while(t--) {
        int a, b, res = 1;

        cin >> a >> b;

        b = b % 4;

        if(b == 0) {
            res = a * a * a * a;
        } else {
            for(int i = 0; i < b; i++) {
                res *= a;
            }
        }

        if(res % 10 == 0) {
            cout << 10 << '\n';
        } else {
            cout << res % 10 << '\n';
        }
    }

    return 0;
}