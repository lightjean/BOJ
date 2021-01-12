#include <bits/stdc++.h>
using namespace std;

int n, arr[25][25] = {0}, visited[25][25] = {0};
int mv_x[] = {1, -1, 0, 0}, mv_y[] = {0, 0, -1, 1}; // 상하좌우

void bfs(int x, int y, int cnt) {
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = cnt;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int newpos_x = x + mv_x[i];
            int newpos_y = y + mv_y[i];
            if (0 <= newpos_x && newpos_x < n && 0 <= newpos_y && newpos_y < n) {
                if (arr[newpos_x][newpos_y] == 1 && visited[newpos_x][newpos_y] == 0) {
                    q.push({newpos_x, newpos_y});
                    visited[newpos_x][newpos_y] = cnt;
                }
            }
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%1d", &arr[i][j]); // 입력 받는 것 때문에 틀림
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) { // 연결 요소 개수 구하기
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 1 && visited[i][j] == 0) {
                bfs(i, j, ++cnt);
            }
        }
    }

    int ans[25 * 25] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[visited[i][j]] += 1;
        }
    }

    sort(ans + 1, ans + cnt + 1);
    printf("%d\n", cnt);
    for (int i = 1; i <= cnt; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}