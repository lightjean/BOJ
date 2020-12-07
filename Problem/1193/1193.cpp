#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, cnt = 0, n = 1, a, b;
    cin >> x;

    while (cnt != x) {
        if (n % 2 == 0) {
            a = 1;
            b = n;
            cnt++;
            for (int i = 1; i < n; i++) {
                if (cnt == x) break;
                a++;
                b--;
                cnt++;
            }
        } else {
            a = n;
            b = 1;
            cnt++;
            for (int i = 1; i < n; i++) {
                if (cnt == x) break;
                a--;
                b++;
                cnt++;
            }
        }

        n++;
    }
    
    cout << a << "/" << b << '\n';
    return 0;
}