import sys

T = int(sys.stdin.readline())

for i in range(T):
    candy = 0
    newline = input()
    N = int(sys.stdin.readline())

    for j in range(N):
        temp = int(sys.stdin.readline())
        candy += temp

    if candy % N == 0:
        print("YES")
    else:
        print("NO")
