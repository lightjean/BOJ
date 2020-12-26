#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        
        if (n < 12 || m < 4) {
            cout << -1 << '\n';
        } else {
            cout << 11 * m + 4 << '\n';
        }
    }
    return 0;
}