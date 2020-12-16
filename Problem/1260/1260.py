import sys
from collections import deque

def dfs(start):
    global visited
    visited[start] = True
    print(start, end=' ')
    for x in adj_list[start]:
        if visited[x] == False:
            dfs(x)

def bfs(start):
    visited = [False] * (N + 1) # DFS 이후 초기화
    q = deque()
    q.append(start)
    visited[start] = True
    while q:
        x = q.popleft()
        print(x, end=' ')
        for y in adj_list[x]:
            if visited[y] == False:
                q.append(y)
                visited[y] = True

N, M, V = map(int, sys.stdin.readline().split())
adj_list = [[] for _ in range(N + 1)] # 인접 리스트
visited = [False] * (N + 1) # 정점 방문 여부 체크

for i in range(M):
    u, v = map(int, sys.stdin.readline().split())
    adj_list[u].append(v)
    adj_list[v].append(u)

for edges in adj_list:
    edges.sort()

dfs(V)
print()
bfs(V)
print()