#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; i++) {
        ans += v[i];
        v[i + 1] += v[i];
    }

    ans += v[n - 1];
    cout << ans << '\n';
    return 0;
}