import sys
from collections import deque

def bfs(start):
    visited = [False] * (n + 1)
    q = deque()
    q.append(start)
    visited[start] = True
    while q:
        x = q.popleft()
        global ans
        for y in adj_list[x]:
            if visited[y] == False:
                q.append(y)
                visited[y] = True
                ans += 1

n = int(sys.stdin.readline())
adj_list = [[] for _ in range(n + 1)]
m = int(sys.stdin.readline())
ans = 0

for i in range(m):
    u, v = map(int, sys.stdin.readline().split())
    adj_list[u].append(v)
    adj_list[v].append(u)

bfs(1)
print(ans)