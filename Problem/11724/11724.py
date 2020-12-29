import sys
from collections import deque

def bfs(start):
    q = deque()
    q.append(start)
    visited[start] = True
    while q:
        x = q.popleft()
        for y in adj_list[x]:
            if visited[y] == False:
                q.append(y)
                visited[y] = True

N, M = map(int, sys.stdin.readline().split())
adj_list = [[] for _ in range(N + 1)]
visited = [False] * (N + 1)
ans = 0

for i in range(M):
    u, v = map(int, sys.stdin.readline().split())
    adj_list[u].append(v)
    adj_list[v].append(u)

for i in range(1, N + 1):
    if visited[i] == False:
        bfs(i)
        ans += 1

print(ans)