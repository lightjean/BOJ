#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int cnt = 0;

        for (int j = 1; j * j <= i; j++) {
            if (i % j == 0) {
                cnt++;
            }
        }

        ans += cnt;
    }

    cout << ans << '\n';
    return 0;
}