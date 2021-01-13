#include <bits/stdc++.h>
using namespace std;

int w, h, arr[50][50] = {0}, visited[50][50] = {0};
int mv_x[] = {-1, 1, 0, 0, -1, -1, 1, 1}, mv_y[] = {0, 0, -1, 1, -1, 1, -1, 1}; // 상하좌우 및 대각선 8방향

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = 1;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int newpos_x = x + mv_x[i];
            int newpos_y = y + mv_y[i];
            if (0 <= newpos_x && newpos_x < h && 0 <= newpos_y && newpos_y < w) {
                if (arr[newpos_x][newpos_y] == 1 && visited[newpos_x][newpos_y] == 0) {
                    q.push({newpos_x, newpos_y});
                    visited[newpos_x][newpos_y] = 1;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (1) {
        cin >> w >> h;
        if (w == 0 && h == 0) break;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> arr[i][j];
            }
        }

        int cnt = 0;
        memset(visited, 0, sizeof(visited));

        for (int i = 0; i < h; i++) { // 연결 요소 개수 구하기
            for (int j = 0; j < w; j++) {
                if (arr[i][j] == 1 && visited[i][j] == 0) {
                    bfs(i, j);
                    cnt += 1;
                }
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}