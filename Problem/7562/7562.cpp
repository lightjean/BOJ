#include <bits/stdc++.h>
using namespace std;

int I, x, y, dest_x, dest_y, visited[300][300] = {0};
int mv_x[] = {-2, -2, 2, 2, -1, -1, 1, 1}, mv_y[] = {-1, 1, -1, 1, -2, 2, -2, 2};

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
            if (0 <= newpos_x && newpos_x < I && 0 <= newpos_y && newpos_y < I) {
                if (visited[newpos_x][newpos_y] == 0) {
                    q.push({newpos_x, newpos_y});
                    visited[newpos_x][newpos_y] = visited[x][y] + 1;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        memset(visited, 0, sizeof(visited));
        cin >> I >> x >> y >> dest_x >> dest_y;
        bfs(x, y);
        cout << visited[dest_x][dest_y] - 1 << '\n';
    }
    return 0;
}