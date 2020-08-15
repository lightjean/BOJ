N, M = map(int, input().split())
idx = 1

for i in range(N):
    for j in range(M):
        if j == M - 1:
            print(idx, end='')
        else:
            print(idx, end=' ')
        idx += 1
    print()