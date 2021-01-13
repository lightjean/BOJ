#include <bits/stdc++.h>
using namespace std;

int n, m, maze[100][100] = {0}, visited[100][100] = {0};
int mv_x[] = {-1, 1, 0, 0}, mv_y[] = {0, 0, -1, 1};

void bfs(int x, int y, int start) {
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = start;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        if (x == n - 1 && y == m - 1) break;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int newpos_x = x + mv_x[i];
            int newpos_y = y + mv_y[i];
            if (0 <= newpos_x && newpos_x < n && 0 <= newpos_y && newpos_y < m) {
                if (maze[newpos_x][newpos_y] == 1 && visited[newpos_x][newpos_y] == 0) {
                    q.push({newpos_x, newpos_y});
                    visited[newpos_x][newpos_y] = visited[x][y] + 1;
                } 
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &maze[i][j]);
        }
    }
    bfs(0, 0, 1);
    cout << visited[n - 1][m - 1] << '\n';
    return 0;
}