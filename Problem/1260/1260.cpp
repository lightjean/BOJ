#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

vector<int> v[1001]; // 인접 리스트
bool check[1001] = {false}; // 정점 방문 여부 체크

void dfs(int node1) { // DFS(재귀로 구현)
    check[node1] = true;
    cout << node1 << " ";

    for(int i = 0; i < v[node1].size(); i++) {
        int next = v[node1][i];
        // 현재 정점과 연결된 정점들 중 방문하지 않은 정점이 있으면
        if(check[next] == false) {
            dfs(next);
        }
    }
}

void bfs(int node2) { // BFS
    queue<int> q;
    // 정점 방문할 때 큐에 넣어줘야 함
    check[node2] = true;
    q.push(node2);

    while(!q.empty()) { // x는 현재 정점
        int node = q.front();
        cout << node << " ";
        q.pop();

        for(int i = 0; i < v[node].size(); i++) {
            int next = v[node][i];
            if(check[next] == false) {
                // 다음 정점 방문할 때 마다 큐에 다음 정점 넣기
                check[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    int n, m, start;
    cin >> n >> m >> start;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        // 간선이 양방향이므로
        v[a].push_back(b);
        v[b].push_back(a);
    }
    // 작은 정점 번호부터 방문해야 하므로 정렬
    for(int i = 1; i <= n; i++) {
        sort(v[i].begin(), v[i].end());
    }

    dfs(start);
    cout << '\n';
    memset(check, false, sizeof(check)); // 메모리 초기화
    bfs(start);
    cout << '\n';
    return 0;
}