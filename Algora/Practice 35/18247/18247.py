T = int(input())

for i in range(T):
    N, M = map(int, input().split())

    if N < 12 or M < 4:
        print(-1)
    else:
        print(M * 11 + 4)