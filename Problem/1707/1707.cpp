#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[20001];
int visited[20001] = {0};

void bfs(int start) {
    queue<int> q;
    int c = 1;
    visited[start] = c;
    q.push(start);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = 0; i < adj_list[x].size(); i++) {
            int next = adj_list[x][i];
            if (visited[next] == 0) {
                visited[next] = 3 - visited[x];
                q.push(next);
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
        int v, e;
        cin >> v >> e;

        for (int i = 1; i <= v; i++) {
            adj_list[i].clear();
            visited[i] = 0;
        }

        for (int i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }

        for (int i = 1; i <= v; i++) { // 모든 정점이 간선으로 연결되어 있지 않을 수 있기 때문에 간선이 없은 정점에도 bfs
            if (visited[i] == 0) {
                bfs(i);
            }
        }

        bool flag = true;
        for (int i = 1; i <= v; i++) {
            for (int j = 0; j < adj_list[i].size(); j++) {
                int tmp = adj_list[i][j];
                if (visited[i] == visited[tmp]) {
                    flag = false;
                }
            }
        }

        if (flag) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}