import sys

N = int(input())
temp = map(int, sys.stdin.readline().rstrip().split())
L = list(temp)
ans = []

for i in range(N):
    cnt = 0
    for j in range(i + 1, N):
        if L[i] >= L[j]:
            cnt += 1
        else:
            break
    ans.append(cnt)

print(max(ans))