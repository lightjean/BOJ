#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, h, w, n;

    cin >> t;

    while(t--) {
        cin >> h >> w >> n;

        if(n % h == 0) {
            cout << h;
        } else {
            cout << n % h;
        }

        if(n / h <= 8) {
            if(n % h != 0) {
                cout << 0 << n / h + 1 << '\n';
            } else {
                cout << 0 << n / h << '\n';
            }
        } else if(n / h == 9) {
            if(n % h == 0) {
                cout << 0 << n / h << '\n';
            } else {
                cout << n / h + 1 << '\n';
            }
        } else {
            if(n % h == 0) {
                cout << n / h << '\n';
            } else {
                cout << n / h + 1 << '\n';
            }
        }
    }

    return 0;
}