import sys

T = int(sys.stdin.readline())

for i in range(T):
    sum = 0
    N = int(sys.stdin.readline())

    for j in range(N):
        x, y = map(int, sys.stdin.readline().rstrip().split())
        
        for k in range(1, 11):
            if x * x + y * y <= 400 * k * k:
                ans += 11 - k
                break

print(sum)