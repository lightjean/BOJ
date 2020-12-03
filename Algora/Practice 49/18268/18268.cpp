#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, ans = 0;
    cin >> k >> n;

    vector<vector<int>> tmp(k, vector<int>(n)), v(k, vector<int>(n));
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tmp[i][j];
            v[i][--tmp[i][j]] = j + 1;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int index = 1;
            bool check = 1;

            if (v[0][i] > v[0][j]) {
                while (index != k) {
                    if (v[index][i] < v[index][j]) {
                        check = 0;
                        break;
                    }
                    index++;
                }
            } else {
                while (index != k) {
                    if (v[index][i] > v[index][j]) {
                        check = 0;
                        break;
                    }
                    index++;
                }
            }

            if (check) ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}