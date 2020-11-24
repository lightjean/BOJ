#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, r = 0, c = 0;
    long long int ans = 0;
    cin >> n >> m;

    vector<int> trash_row(n + 1), trash_col(m + 1);

    for (int i = 1; i <= n; i++)
        cin >> trash_row[i];

    for (int i = 1; i <= m; i++)
        cin >> trash_col[i];

    while (1) {
        if (r == n && c == m) break;

        if (r == n) {
            c += 1;
            ans += trash_col[c];
        } else if (c == m) {
            r += 1;
            ans += trash_row[r];
        } else if (trash_row[r + 1] < trash_col[c + 1]){
            r += 1;
            ans += trash_row[r];
        } else {
            c += 1;
            ans += trash_col[c];
        }
    }

    cout << ans << '\n';
    return 0;
}