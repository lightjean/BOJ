#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<vector<int>> v(15, vector<int>(14));

    for (int i = 0; i < 14; i++)
        v[0][i] = i + 1;

    for (int i = 1; i <= 14; i++) {
        int sum = 0;
        for (int j = 0; j < 14; j++) {
            sum += v[i - 1][j];
            v[i][j] = sum;
        }
    }

    while (t--) {
        int k, n;
        cin >> k >> n;
        cout << v[k][n - 1] << '\n';
    }

    return 0;
}