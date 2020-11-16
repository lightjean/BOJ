#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (1) {
        int n, m, call_info[10000][4], section[100][2]; // src, dest는 필요없음
        cin >> n >> m;
        if (n == 0 && m == 0) break;

        for (int i = 0; i < n; i++)
            cin >> call_info[i][0] >> call_info[i][1] >> call_info[i][2] >> call_info[i][3];

        for (int i = 0; i < m; i++)
            cin >> section[i][0] >> section[i][1];

        for (int i = 0; i < m; i++) {
            int find_begin = section[i][0], find_end = section[i][0] + section[i][1], cnt = n;
            for (int j = 0; j < n; j++) {
                int call_begin = call_info[j][2], call_end = call_info[j][2] + call_info[j][3];
                if (call_end <= find_begin || call_begin >= find_end) cnt--;
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}