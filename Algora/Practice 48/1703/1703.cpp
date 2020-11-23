#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (1) {
        int a, ans = 1;
        cin >> a;

        if (a == 0) break;

        vector<int> v(2 * a);

        for (int i = 0; i < 2 * a; i++) {
            cin >> v[i];
            if (i % 2 == 0) {
                ans *= v[i];
            } else {
                ans -= v[i];
            }
        }

        cout << ans << '\n';
    }
    return 0;
}