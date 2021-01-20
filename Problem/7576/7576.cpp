#include <bits/stdc++.h>
using namespace std;

int m, n, ans = 0, box[1000][1000] = {0}, visited[1000][1000] = {0};
int mv_x[] = {-1, 1, 0, 0}, mv_y[] = {0, 0, -1, 1};
queue<pair<int, int>> q;

void bfs() {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        int day = visited[x][y];
        q.pop();
        for (int i = 0; i < 4; i++) {
            int newpos_x = x + mv_x[i];
            int newpos_y = y + mv_y[i];
            if (0 <= newpos_x && newpos_x < n && 0 <= newpos_y && newpos_y < m) {
                if (box[newpos_x][newpos_y] != -1 && visited[newpos_x][newpos_y] == 0) {
                    q.push({newpos_x, newpos_y});
                    visited[newpos_x][newpos_y] = day + 1;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> box[i][j];
            if (box[i][j] == 1) { // 익은 토마토 위치를 미리 큐에 전부 넣어야 함
                q.push({i, j});
                visited[i][j] = 1;
            } else if (box[i][j] == -1) {
                visited[i][j] = -1;
            }
        }
    }

    bfs();

    for (int i = 0; i < n; i++) { // 토마토가 모두 익을 수 있는지 검사
        for (int j = 0; j < m; j++) {
            if (visited[i][j] == 0) {
                cout << -1 << '\n';
                return 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ans < visited[i][j]) {
                ans = visited[i][j];
            }
        }
    }

    if (ans == 1) {
        cout << 0 << '\n';
    } else {
        cout << ans - 1 << '\n';
    }
    return 0;
}