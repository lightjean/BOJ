import sys
from collections import deque

def bfs(start, end):
    count = 0
    q = deque()
    q.append([start, count]) # start에서 해당 정점까지 몇 번 거쳐야 하는지에 대한 정보인 count도 포함
    visited[start] = True
    while q:
        x = q.popleft()
        if x[0] == end: # 친척 관계가 존재
            return x[1]
        for y in adj_list[x[0]]:
            if visited[y] == False:
                q.append([y, x[1] + 1])
                visited[y] = True
    return -1


n = int(sys.stdin.readline())
x, y = map(int, sys.stdin.readline().split())
m = int(sys.stdin.readline())

adj_list = [[] for _ in range(n + 1)]
visited = [False] * (n + 1)

for _ in range(m):
    u, v = map(int, sys.stdin.readline().split())
    adj_list[u].append(v)
    adj_list[v].append(u)

print(bfs(x, y))