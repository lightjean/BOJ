#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int m, n, x, y, k;
        bool flag = 0;
        cin >> m >> n >> x >> y;
        // 경우의 수가 매우 많으므로 고정된 x에 대해서 x, y가 일치할 때의 년도를 계산
        for (int i = x; i <= m * n; i += m) { // m씩 건너 뛰며 x를 고정
            if (i % n == y % n) {
                k = i;
                flag = 1;
                break;
            }
        }
        if (flag) {
            cout << k << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}