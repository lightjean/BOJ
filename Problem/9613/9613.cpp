#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long ans = 0;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                ans += gcd(v[i], v[j]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}