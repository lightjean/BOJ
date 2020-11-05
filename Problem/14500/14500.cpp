#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, ans = 0;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];

    for (int i = 0; i < n; i++) {
        int tmp;
        for (int j = 0; j < m; j++) {
            if (i + 3 < n) {
                tmp = v[i][j] + v[i + 1][j] + v[i + 2][j] + v[i + 3][j];
                if (tmp > ans) ans = tmp;
            }
            if (j + 3 < m) {
                tmp = v[i][j] + v[i][j + 1] + v[i][j + 2] + v[i][j + 3];
                if (tmp > ans) ans = tmp;
            }
            if (i + 1 < n && j + 1 < m) {
                tmp = v[i][j] + v[i][j + 1] + v[i + 1][j] + v[i + 1][j + 1];
                if (tmp > ans) ans = tmp;
            }
            if (i + 1 < n && j + 2 < m) {
                tmp = v[i][j] + v[i][j + 1] + v[i][j + 2] + v[i + 1][j + 1];
                if (tmp > ans) ans = tmp;
            }
            if (i + 2 < n && j + 1 < m) {
                tmp = v[i][j] + v[i + 1][j] + v[i + 2][j] + v[i + 1][j + 1];
                if (tmp > ans) ans = tmp;
            }
            if (i + 2 < n && j + 1 < m) {
                tmp = v[i][j + 1] + v[i + 1][j] + v[i + 1][j + 1] + v[i + 2][j + 1];
                if (tmp > ans) ans = tmp;
            }
            if (i + 1 < n && j + 2 < m) {
                tmp = v[i][j + 1] + v[i + 1][j] + v[i + 1][j + 1] + v[i + 1][j + 2];
                if (tmp > ans) ans = tmp;
            }
            if (i + 2 < n && j + 1 < m) {
                tmp = v[i][j] + v[i + 1][j] + v[i + 2][j] + v[i + 2][j + 1];
                if (tmp > ans) ans = tmp;
            }
            if (i + 1 < n && j + 2 < m) {
                tmp = v[i][j + 2] + v[i + 1][j] + v[i + 1][j + 1] + v[i + 1][j + 2];
                if (tmp > ans) ans = tmp;
            }
            if (i + 2 < n && j + 1 < m) {
                tmp = v[i][j] + v[i][j + 1] + v[i + 1][j + 1] + v[i + 2][j + 1];
                if (tmp > ans) ans = tmp;
            }
            if (i + 1 < n && j + 2 < m) {
                tmp = v[i][j] + v[i][j + 1] + v[i][j + 2] + v[i + 1][j];
                if (tmp > ans) ans = tmp;
            }
            if (i + 2 < n && j + 1 < m) {
                tmp = v[i][j + 1] + v[i + 1][j + 1] + v[i + 2][j] + v[i + 2][j + 1];
                if (tmp > ans) ans = tmp;
            }
            if (i + 1 < n && j + 2 < m) {
                tmp = v[i][j] + v[i + 1][j] + v[i + 1][j + 1] + v[i + 1][j + 2];
                if (tmp > ans) ans = tmp;
            }
            if (i + 2 < n && j + 1 < m) {
                tmp = v[i][j] + v[i][j + 1] + v[i + 1][j] + v[i + 2][j];
                if (tmp > ans) ans = tmp;
            }
            if (i + 1 < n && j + 2 < m) {
                tmp = v[i][j] + v[i][j + 1] + v[i][j + 2] + v[i + 1][j + 2];
                if (tmp > ans) ans = tmp;
            }
            if (i + 2 < n && j + 1 < m) {
                tmp = v[i][j] + v[i + 1][j] + v[i + 1][j + 1] + v[i + 2][j + 1];
                if (tmp > ans) ans = tmp;
            }
            if (i + 1 < n && j + 2 < m) {
                tmp = v[i][j + 1] + v[i][j + 2] + v[i + 1][j] + v[i + 1][j + 1];
                if (tmp > ans) ans = tmp;
            }
            if (i + 2 < n && j + 1 < m) {
                tmp = v[i][j + 1] + v[i + 1][j] + v[i + 1][j + 1] + v[i + 2][j];
                if (tmp > ans) ans = tmp;
            }
            if (i + 1 < n && j + 2 < m) {
                tmp = v[i][j] + v[i][j + 1] + v[i + 1][j + 1] + v[i + 1][j + 2];
                if (tmp > ans) ans = tmp;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}